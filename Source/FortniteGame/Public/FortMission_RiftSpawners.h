#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "FortEncounterSettings.h"
#include "FortMission.h"
#include "FortRiftSpawnerData.h"
#include "FortMission_RiftSpawners.generated.h"

class AActor;
class AController;
class AFortAIPawn;
class UFortAIEncounterInfo;
class UPrimitiveComponent;

UCLASS(Abstract, Blueprintable)
class AFortMission_RiftSpawners : public AFortMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartBasedOnAthenaGamePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase StartingGamePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartingDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAthenaSafeZonePhases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronizeEncounterStartTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinEncounterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEncounterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortEncounterSettings EncounterSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRiftIntensification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MinDamageTriggerPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxDamageTriggerPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery RequiredRiftTagsQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredEventFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AssociatedSupplyDropIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnerShutdownCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BurstFallbackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CalendarRecheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortRiftSpawnerData> ActiveRiftSpawnerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentEncounterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bRiftSpawningInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float SyncedEncounterStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCalendarAllowsSpawning;
    
public:
    AFortMission_RiftSpawners();
    UFUNCTION(BlueprintCallable)
    void SetCalendarAllowsActive(bool bInCanBeActive);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinalSpawnUsed(UFortAIEncounterInfo* Encounter);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveEventsChanged(const TArray<FString>& ActiveEventFlags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRiftDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleRampStarted(UFortAIEncounterInfo* Encounter);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleEncounterAllBurstEnemiesSpawned(UFortAIEncounterInfo* Encounter);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleAthenaSafeZonePhaseChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleAthenaGamePhaseChanged(EAthenaGamePhase GamePhase);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
};

