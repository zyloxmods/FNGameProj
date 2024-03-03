#pragma once
#include "CoreMinimal.h"
#include "EFortIdleDetectionState.h"
#include "FortGameModeZone.h"
#include "Templates/SubclassOf.h"
#include "FortGameModePvE.generated.h"

class AActor;
class ABuildingContainer;
class AFortAircraft;

UCLASS(Blueprintable, NonTransient)
class AFortGameModePvE : public AFortGameModeZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdleKickEnabledByConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdleKickEnabledByBlueprint;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyIdleKickPublicMatches;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetDefaultIdleTimeWhenNoLongerSolo;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnyMovementNotIdleWhilePrivate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRestrictMaxIdleTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestrictedMaxIdleTime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSendIdleAnalytics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildingContainersStartAlreadySearched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnLootForBuildingContainersThatStartAlreadySearched;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingContainer>> BuildingContainersThatRequireSearching;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnWeaponsWithMaxPerks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnTrapsWithMaxPerks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseHighPerkSlotValues: 1;
    
public:
    AFortGameModePvE();
    UFUNCTION(BlueprintCallable)
    void SetIdleKickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleDetectionScoreThreshold(EFortIdleDetectionState IdleState, int32 InScoreThreshold);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleDetectionPenaltyTime(float InPenaltyTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleDetectionMovementDistance(EFortIdleDetectionState IdleState, float InMovementDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleDetectionMinIdleTime(EFortIdleDetectionState IdleState, float InMinIdleTime);
    
    UFUNCTION(BlueprintCallable)
    void SetIdleDetectionMaxIdleTime(EFortIdleDetectionState IdleState, float InMaxIdleTime);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllowIdlePlayerLocation(AActor* LocationActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnAircraftRegistered(const AFortAircraft* InAircraft);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAllowIdlePlayerLocation(AActor* LocationActor, float Radius);
    
};

