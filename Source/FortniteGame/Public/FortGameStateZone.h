#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayModifierArray.h"
#include "ActiveGameplayModifierHandle.h"
#include "EFortAIDirectorEvent.h"
#include "EFortCompletionResult.h"
#include "EFortItemType.h"
#include "EFortVoteArbitratorType.h"
#include "EFortVoteType.h"
#include "EServerStability.h"
#include "EStatCategory.h"
#include "FortAIDirectorEvent.h"
#include "FortGameState_InGame.h"
#include "FortItemQuantityPair.h"
#include "FortVoteConfig.h"
#include "FortZoneDifficultyIncreaseRewardData.h"
#include "FortZoneMissionAlertData.h"
#include "OnCompletionResultDelegate.h"
#include "OnGameplayVotesUpdatedDelegate.h"
#include "OnNumSurvivorsRescuedChangedDelegate.h"
#include "OnScoreTotalsChangedDelegate.h"
#include "PlayerBuildableClassContainer.h"
#include "ReplicatedMontageMap.h"
#include "Templates/SubclassOf.h"
#include "TieredWaveSetData.h"
#include "VoteData.h"
#include "Voter.h"
#include "FortGameStateZone.generated.h"

class ABuildingActor;
class AFortAIPawn;
class AFortCreativePortalManager;
class AFortCreativeRealEstatePlotManager;
class AFortGlobalEnvironmentAbilityActor;
class AFortInGameMapManager;
class AFortPlayerController;
class AFortPlayerState;
class AFortThreatParticleActor;
class AFortThreatVisualsManager;
class UBuildingStructuralSupportSystem;
class UFortAbilitySystemComponent;
class UFortCharacterCosmeticManager;
class UFortCurieManager;
class UFortGameplayModifierItemDefinition;
class UFortMissionGenerator;
class UFortSkinWeightOverrideManager;
class UFortZoneTheme;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class AFortGameStateZone : public AFortGameState_InGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 PawnIDCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 WaitingToLeaveZoneTimeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float HostilityMeterPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float IntensityPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnPointsCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 SpawnPointsAllocated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxTotalAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxEncounterAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    int32 MaxEncounterSP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FReplicatedMontageMap ReplicatedMontageMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_AllSpawnGroupUpgradeModifierDefs, meta=(AllowPrivateAccess=true))
    TArray<UFortGameplayModifierItemDefinition*> AllSpawnGroupUpgradeModifierDefs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CompletionResult, meta=(AllowPrivateAccess=true))
    EFortCompletionResult CompletionResult;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerBuildingSkillLevel, meta=(AllowPrivateAccess=true))
    float PlayerBuildingSkillLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PlayerSharedTrapAttributes, meta=(AllowPrivateAccess=true))
    TArray<float> PlayerSharedMaxTrapAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> GameplayMutatorObservers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ExplicitGloballyBlockedAbilityTags, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ExplicitGloballyBlockedAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bInvitesRestricted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bDBNODeathEnabled;
    
    UPROPERTY(EditAnywhere, ReplicatedUsing=OnRep_ServerGameplayTagIndexHash, meta=(AllowPrivateAccess=true))
    uint32 ServerGameplayTagIndexHash;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisconnectOnServerGameplayTagIndexHashMismatch;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletionResult OnCompletionResultEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerStructuresChanged, meta=(AllowPrivateAccess=true))
    int32 TotalPlayerStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerStructuresChanged, meta=(AllowPrivateAccess=true))
    int32 MaxPlayerStructures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bGlobalCeaseFire, meta=(AllowPrivateAccess=true))
    bool bGlobalCeaseFire;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortGlobalEnvironmentAbilityActor* GlobalEnvironmentAbilityActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAbilitySystemComponent*> GlobalGameplayEventListeners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveGameplayModifiers, meta=(AllowPrivateAccess=true))
    FActiveGameplayModifierArray ActiveGameplayModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSupportRuntimeShutdownOfGameplayModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingStructuralSupportSystem* StructuralSupportSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Replicated, meta=(AllowPrivateAccess=true))
    UFortCurieManager* CurieManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ZoneDifficultyInfoRow, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ZoneDifficultyInfoRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortZoneTheme* ZoneTheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MissionGenerator, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortMissionGenerator> MissionGeneratorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MissionRewards, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> MissionRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_DifficultyIncreaseRewards, meta=(AllowPrivateAccess=true))
    TArray<FFortZoneDifficultyIncreaseRewardData> DifficultyIncreaseRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_MissionAlertData, meta=(AllowPrivateAccess=true))
    FFortZoneMissionAlertData MissionAlertData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClientPreloadMissionClasses, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> ClientPreloadMissionClasses;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortThreatVisualsManager* ThreatVisualsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortThreatParticleActor* ThreatParticleActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawRunVariationDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortAIPawn*> PawnVariationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 VariationIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GameDifficulty, meta=(AllowPrivateAccess=true))
    float GameDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGroupContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DifficultyIncreaseRewardTier, meta=(AllowPrivateAccess=true))
    int32 DifficultyIncreaseRewardTier;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowedToUpdateBackendDifficulty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowedToOverrideBackendRewards: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ABuildingActor>> AllPlayerBuildableClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ABuildingActor>, int32> AllPlayerBuildableClassesIndexLookup;
    
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlayerBuildableClassContainer PlayerBuildableClasses[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortInGameMapManager* UIMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCharacterCosmeticManager* CharacterCosmeticManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSkinWeightOverrideManager* SkinWeightManager;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnScoreTotalsChanged OnScoreTotalsChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScoringTableRowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalCombatScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalBuildingScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TotalUtilityScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TheaterUniqueId, meta=(AllowPrivateAccess=true))
    FString TheaterUniqueId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FString MissionLogDebugString;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowBuildingCostMods: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFreeBuildingRepairs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowBuildingAtLayoutRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowBuildingWithoutLayoutRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowLayoutRequirementsFeature;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAllowBuildingThroughBlockingObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumSurvivorsSpawned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumSurvivorsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_NumSurvivorsRescued, meta=(AllowPrivateAccess=true))
    int32 NumSurvivorsRescued;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnNumSurvivorsRescuedChanged OnNumSurvivorsRescuedChangedDelegate;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRepServerUnstableFramerate, meta=(AllowPrivateAccess=true))
    EServerStability ServerStability;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_GameplayVotes, meta=(AllowPrivateAccess=true))
    TArray<FVoteData> GameplayVotesArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCreativePortalManager* CreativePortalManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortCreativeRealEstatePlotManager* CreativeRealEstatePlotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseMaxBackpackSize;
    
public:
    AFortGameStateZone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnregisterGameplayModifier(const FActiveGameplayModifierHandle& InHandleToUnregister);
    
    UFUNCTION(BlueprintCallable)
    void UnbindDelegateOnGameplayVoteUpdated(EFortVoteType VoteType, FOnGameplayVotesUpdated Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool ShouldDisablePlayerTeleportingDuringMissionResults() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetZoneCompletionResult(EFortCompletionResult NewCompletionResult);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetWorldLootLevel(const int32 NewLootLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionRewardOverrideTag(FText MissionRewardOverrideTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMissionRewardLootLevelOverride(int32 LootLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsDBNODeathEnabled(bool NewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SetDifficultyIncreaseRewardTier(int32 InDifficultyIncreaseTier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetBuildingAllowed(bool bBuildingAtLayoutRequirementsAllowed, bool bBuildingWithoutLayoutRequirementsAllowed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerSubmitGameplayVote(EFortVoteType VoteType, int32 VoteDecision, const FUniqueNetIdRepl& PlayerNetId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireAIDirectorEventBatch(const TArray<FFortAIDirectorEvent>& Payload);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerFireAIDirectorEvent(EFortAIDirectorEvent Event, UObject* EventSource, UObject* EventTarget, float EventMultiplier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerEndGameplayVote(EFortVoteType VoteType, const FUniqueNetIdRepl& PlayerNetId);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerBeginGameplayVote(EFortVoteType VoteType, const FUniqueNetIdRepl& PlayerNetId, FFortVoteConfig VoteConfig);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RemovePlayerAbilityRestriction();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FActiveGameplayModifierHandle RegisterGameplayModifier(const UFortGameplayModifierItemDefinition* InModifierToRegister, int32 Expiration);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnWaveStart(const FText& LevelText, int32 Level, const FText& WaveText, int32 WaveNum);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnWaveEncounterStarted(const FTieredWaveSetData& WaveData, const FText& LevelText, int32 Level, const FText& WaveText, int32 WaveNum);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void OnWaveBasedModifiersAppliedMulticast(const TArray<UFortGameplayModifierItemDefinition*>& ModifiersApplied);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRepServerUnstableFramerate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ZoneDifficultyInfoRow();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TheaterUniqueId();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerGameplayTagIndexHash();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerStructuresChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerSharedTrapAttributes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerBuildingSkillLevel();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_NumSurvivorsRescued();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionRewards();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionGenerator();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionAlertData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameplayVotes();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GameDifficulty();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplicitGloballyBlockedAbilityTags();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DifficultyIncreaseRewardTier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DifficultyIncreaseRewards();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_CompletionResult();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ClientPreloadMissionClasses();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bGlobalCeaseFire();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_AllSpawnGroupUpgradeModifierDefs();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveGameplayModifiers();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifySurvivorSpawned();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifySurvivorRescued(AFortPlayerController* Rescuer, const FString& SurvivorName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void NotifySurvivorDead();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void NotifyEndFailedGameplayVoteLockout(EFortVoteType VoteType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRespawningAllowed(AFortPlayerState* PlayerState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayVoteLocked(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayVoteInProgress(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayVoteActive(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsBuildingWithoutLayoutRequirementsAllowed() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsBuildingAtLayoutRequirementsAllowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyGameplayVoteActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActiveGameplayModifiers() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GloballyUnblockAbilitiesWithTags(FGameplayTagContainer TagsToUnblock);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GloballyBlockAbilitiesWithTags(FGameplayTagContainer TagsToBlock);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCompletionResult GetZoneCompletionResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoteStartTime(EFortVoteType VoteType, float& VoteStartTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoteInstigator(EFortVoteType VoteType, FUniqueNetIdRepl& InstigatorNetId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoteEndTime(EFortVoteType VoteType, float& VoteEndTime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVoteDuration(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetVoteArbitratorType(EFortVoteType VoteType, EFortVoteArbitratorType& ArbitratorType) const;
    
    UFUNCTION(BlueprintCallable)
    AFortInGameMapManager* GetUIMapManager();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotalScore(EStatCategory ScoreCategory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingToEndVote(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeRemainingToEndFailedVoteLockout(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeElapsedSinceEndVote(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeElapsedSinceBeginVote(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortThreatParticleActor* GetThreatParticleActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSupressedCraftingItemTypes(TArray<EFortItemType>& OutItemTypes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSupressedCraftingFilterNames(TArray<FName>& OutNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    FText GetSupressedCraftingDisplayText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSurvivorsSpawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSurvivorsRescued() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSurvivorsDead() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetNumAllowedDifficultyIncreases() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDBNODeathEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FUniqueNetIdRepl> GetGameplayVotesForChoice(EFortVoteType VoteType, int32 VoteChoice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGameDifficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFailedVoteLockOutDuration(EFortVoteType VoteType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCurrentVoters(EFortVoteType VoteType, TArray<FVoter>& Voters) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GetActiveModifiers(TArray<UFortGameplayModifierItemDefinition*>& OutActiveModifiers) const;
    
    UFUNCTION(BlueprintCallable)
    void BindDelegateOnGameplayVoteUpdated(EFortVoteType VoteType, FOnGameplayVotesUpdated Delegate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyPlayerAbilityRestriction();
    
};

