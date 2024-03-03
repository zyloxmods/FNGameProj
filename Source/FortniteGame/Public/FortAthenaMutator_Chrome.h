#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "AthenaGameMessageData.h"
#include "ChromeRoute.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortSquadStartSearchParamData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Chrome.generated.h"

class AAthenaChromeTraversePoint;
class AAthenaTraversePoint;
class AFortAthenaMutator_SynchronizedTeleport;
class AFortPlayerStateAthena;
class AFortSquadStart;
class UGameplayEffect;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_Chrome : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TeleportingPlayersText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AAthenaChromeTraversePoint> TraversePointClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrimaryAssetId> ChromeVehicleAssetIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSquadStartSearchParamData VehicleStartSearchParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> FuelSettingGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ScoreToWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bUseOverridingSpawnTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> OverridingSpawnTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChromeRoute> Routes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat CountdownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumOfTeamsToFinishBeforeFinalizeWinner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_ChromeInfoMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> GameMsg_RaceCountdownMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_FinishPointReached;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortSquadStart*> ChromeSquadStarts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFortPlayerStateAthena*> FinishedPlayerStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_SynchronizedTeleport* TeleportMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FinishTraversePoint, meta=(AllowPrivateAccess=true))
    AAthenaChromeTraversePoint* FinishTraversePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RaceStarted, meta=(AllowPrivateAccess=true))
    bool bRaceStarted;
    
public:
    AFortAthenaMutator_Chrome();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTraversePointTouched(AAthenaTraversePoint* PointActor, AFortPlayerStateAthena* TouchingPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RaceStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FinishTraversePoint();
    
    UFUNCTION(BlueprintCallable)
    void HandleTeleportComplete();
    
};

