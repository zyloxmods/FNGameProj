#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhase.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData_Teams.h"
#include "OnRespawnTimeRemainingUpdateDelegate.h"
#include "PowPlayerDataArray.h"
#include "FortAthenaMutator_Pow.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Pow : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRespawnTimeRemainingUpdate TimeRemainingUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData_Teams RespawnSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAthenaGameMessageData> IntroMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData RespawningOffMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData RespawnsWillBeOffMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RespawningTimeAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GrantMaxShieldAtRespawnsOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GrantMaxHealthAtRespawnsOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPowPlayerDataArray PlayerData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RespawningCurrentlyAllowed, meta=(AllowPrivateAccess=true))
    bool bRespawningCurrentlyAllowed;
    
public:
    AFortAthenaMutator_Pow();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RespawningCurrentlyAllowed();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseChanged(EAthenaGamePhase NewPhase);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayerCurrentShield(AFortPlayerStateAthena* Player) const;
    
};

