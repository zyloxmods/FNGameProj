#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "EAthenaGamePhaseStep.h"
#include "EMashDifficulty.h"
#include "EMashPhase.h"
#include "FortAthenaMutator.h"
#include "FortObjectiveMessagesAssetData.h"
#include "MashDifficultySettings.h"
#include "MashLootTierOverrideAssetData.h"
#include "MashObjectiveAreaInstanceData.h"
#include "MashPlayerDataArray.h"
#include "MashScoreData.h"
#include "MashScoreMultiplierSpawnData.h"
#include "OnFinalBeaconInteractionAvailableDelegate.h"
#include "OnMashPhaseChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Mash.generated.h"

class AActor;
class ABuildingActor;
class ABuildingRift;
class AController;
class AFortAIPawn;
class AFortPawn;
class UFortAIEncounterInfo;
class UFortDifficultyEncounterSettings;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaMutator_Mash : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMashPhaseChanged OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFinalBeaconInteractionAvailable OnFinalBeaconInteractionAvailable;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideReplicationSettingsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxAIPerClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReplicateGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsingSpecialLocationDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> SpecialLocationDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMashDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> EncampmentObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsObjectiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsMovingSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsRespawnActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat FinalBeaconInteractionTimeBeforeEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingActor> BeaconObjectiveClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnScoreMultiplierTraceStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSscoreMultiplierTraceEndHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMashScoreMultiplierSpawnData ScoreMutliplierSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DifficultyEncounterSettingsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DifficultyEncounterSettingsDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplayIntroGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplayObjectivesGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortObjectiveMessagesAssetData> ObjectiveMessages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplaySquadMateDeadGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_SquadMateDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplayOnRespawnBlockedGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_OnRespawnBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMashDifficultySettings DifficultySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLootTierOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMashLootTierOverrideAssetData> LootTierOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeadshotGameplayTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMashScoreData ScoreEventList[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ObjectiveAreaCompletedScoreMultiplierBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DynamicScoreMultiplierTimeWithoutKillReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DynamicScoreMultiplierKillThresholdToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DynamicScoreMultiplierTimeThresholdToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DynamicScoreMultiplierIncreaseTimeWhenActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DynamicScoreMultiplierMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLastObjectiveArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsRespawningAllowed, meta=(AllowPrivateAccess=true))
    bool bIsRespawningAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentObjectiveAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalObjectiveAreaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMashObjectiveAreaInstanceData> ObjectiveAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* CurrentEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentLootTierGroupOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DynamicScoreMultiplierTotalKillCount, meta=(AllowPrivateAccess=true))
    int32 DynamicScoreMultiplierTotalKillCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float CurrentDynamicScoreMultiplierTimeWithoutKillReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ConstantScoreMultiplier, meta=(AllowPrivateAccess=true))
    float ConstantScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DynamicScoreMultiplier, meta=(AllowPrivateAccess=true))
    float DynamicScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerData, meta=(AllowPrivateAccess=true))
    FMashPlayerDataArray PlayerDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDynamicScoreMultiplierActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LastAIKillTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<float> AIKillTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPhase, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMashPhase::Type> CurrentPhase;
    
public:
    AFortAthenaMutator_Mash();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetDynamicScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnScoreMultiplierInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsRespawningAllowed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicScoreMultiplierTotalKillCount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DynamicScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConstantScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void OnFinalBeaconInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnActivateFinalBeaconInteraction();
    
    UFUNCTION(BlueprintCallable)
    void IncreaseDynamicScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void HandleAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
};

