#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhaseStep.h"
#include "EDadBroState.h"
#include "FortAthenaMutator_GameModeBase.h"
#include "FortDadbroPickupDespawnData.h"
#include "FortRespawnLogicData.h"
#include "OnDadBroSpawnedDelegate.h"
#include "FortAthenaMutator_DadBro.generated.h"

class AFortAIPawn;
class AFortPawn;
class AFortTimeOfDayManager;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UFortAIEncounterInfo;
class UFortDifficultyEncounterSettings;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_DadBro : public AFortAthenaMutator_GameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DadBroEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector DadBroSpawnLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* DadBroEncounterInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DadBroPawn, meta=(AllowPrivateAccess=true))
    AFortAIPawn* DadBroPawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDadBroSpawned OnDadBroSpawnedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortDadbroPickupDespawnData> PendingPickupDespawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPickupsToDespawnAtOnce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PickupTimeRangeToDespawnAtOnce;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_DadBroCodeState, meta=(AllowPrivateAccess=true))
    EDadBroState DadBroCodeState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float ServerTimeDadBroStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float TimeTakenToDefeatDadBro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPawn* ListeningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InitialLandingCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData RespawnLogicData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseLevelsForSizeModes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverrideTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverriddenTimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverriddenTimeOfDayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayGameOverOnPlayerWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DelayGameOverOnDadBroWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroFirstSafeZoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HideSafeZoneCircles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroDelayBeforeSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroApplySpawnImpulse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroImpulseForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroImpulseRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DadBroVerticalImpulseOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OverridePickUpDespawnTime;
    
public:
    AFortAthenaMutator_DadBro();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StartNextSafeZonePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnIdleEffects(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void ResetBackToStartSafeZone();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_DadBroPawn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DadBroCodeState();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
private:
    UFUNCTION(BlueprintCallable)
    void ListenedPawnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void HandleNewTimeOfDayManager(AFortTimeOfDayManager* NewTodManager);
    
    UFUNCTION(BlueprintCallable)
    void HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void HandleAIDied(UFortAIEncounterInfo* Encounter, AFortAIPawn* DyingEnemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceDadBroStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDesiredDadBroRotation() const;
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DoDebugSphereForImpulse();
    
public:
    UFUNCTION(BlueprintCallable)
    void DespawnPickupsForAoE(float InstantDespawnRange, float MaxDespawnRange, float DespawnTravelSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DespawnIdleEffects();
    
};

