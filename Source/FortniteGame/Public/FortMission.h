#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/OnlineReplStructs.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveGameplayModifierHandle.h"
#include "EAssignmentCreationResult.h"
#include "EFortCompletionResult.h"
#include "EFortMissionAudibility.h"
#include "EFortMissionStatus.h"
#include "EFortObjectiveStatus.h"
#include "EFortRewardType.h"
#include "EMissionGenerationCategory.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortAIGoalInfo.h"
#include "FortBadgeCountArray.h"
#include "FortEncounterSettings.h"
#include "FortGeneratedDifficultyOptions.h"
#include "FortMissionEvent.h"
#include "FortMissionEventName.h"
#include "FortMissionFocusDisplayData.h"
#include "FortMissionInstancedConfigData.h"
#include "FortMissionPlacementActorPreferredTagInfo.h"
#include "FortMissionState.h"
#include "FortMissionTimerInterface.h"
#include "FortMissionWeightedReward.h"
#include "FortPlacementActorDataProviderInterface.h"
#include "FortPossibleMission.h"
#include "OnMissionBuildingSMActorHarvestedEventDelegate.h"
#include "OnMissionContainerSearchedEventDelegate.h"
#include "OnMissionInfoSetDelegate.h"
#include "OnObjectivesUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TieredModifierSetData.h"
#include "FortMission.generated.h"

class AActor;
class AFortAIPawn;
class AFortClientAnnouncement_Basic;
class AFortMission;
class AFortObjectiveBase;
class AFortPawn;
class AFortPlayerController;
class UAudioComponent;
class UDataAsset;
class UFortAIAssignment;
class UFortAIAssignmentSettings;
class UFortAIEncounterInfo;
class UFortAIEncounterSequence;
class UFortAIGoalProvider;
class UFortBotMissionLogic;
class UFortItemDefinition;
class UFortMissionConfigData;
class UFortMissionEventParams;
class UFortMissionGenerator;
class UFortMissionInfo;
class UFortMissionTimerComponent;
class UFortWorldItemDefinition;
class UObject;

UCLASS(Blueprintable, MinimalAPI, NotPlaceable, Config=Game)
class AFortMission : public AFortMissionState, public IFortPlacementActorDataProviderInterface, public IFortMissionTimerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MissionInfo, meta=(AllowPrivateAccess=true))
    UFortMissionInfo* MissionInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortBotMissionLogic> BotLogicClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortBotMissionLogic* BotLogic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> MissionPreloadAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortClientAnnouncement_Basic> AnnouncementClassOverride;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMissionGenerator* MissionGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMissionGenerationCategory::Type> MissionCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_UIIndex, meta=(AllowPrivateAccess=true))
    int32 UIIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_QuestOwnerAccount, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl QuestOwnerAccount;
    
    UPROPERTY(AdvancedDisplay, AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionEventName> MissionEventNames;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnObjectivesUpdated OnObjectivesUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMissionInfoSet OnMissionInfoSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMissionPlacementActorPreferredTagInfo> PlacementActorPreferredTagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadedFromRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bFiredParTimeEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAreNonpublicMatchesLeecherExempt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherPity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherMinMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherCutoff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherTimeScalingCutoff;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherTimeScalingPenaltyMultipler;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherCombatScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherBuildingScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeecherUtilityScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeecherCombatLowBar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeecherBuildingLowBar;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LeecherUtilityLowBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    float MissionActivationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentFocusDisplayData, meta=(AllowPrivateAccess=true))
    FFortMissionFocusDisplayData CurrentFocusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    bool bSilentDestroyNextFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ActiveObjectives, meta=(AllowPrivateAccess=true))
    TArray<AFortObjectiveBase*> ActiveObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> ParticipatingAccounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> ParticipatingButDisconnectedAccounts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_MissionStatus, meta=(AllowPrivateAccess=true))
    EFortMissionStatus MissionStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MissionCompletionTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_bIsMissionVisible, meta=(AllowPrivateAccess=true))
    bool bIsMissionVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    EFortMissionAudibility MissionAudibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentObjectiveBlockIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsMissionVisibleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    FGuid MissionGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 StartingDay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionTimerComponent* TimerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortMissionTimerComponent* TimerElapsedComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bObjectiveTimerExpireShouldFailObjectives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMissionTimerExpireShouldFailMission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsEnemyKilledEventForAllPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ChosenRewardIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PotentialBadgesArray, meta=(AllowPrivateAccess=true))
    FFortBadgeCountArray PotentialBadgesArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGeneratedDifficultyOptions GeneratedMissionOptions;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* MissionCompletionStinger;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortMissionInstancedConfigData ConfigData;
    
public:
    AFortMission();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopMissionAIEncounter(UFortAIEncounterInfo* EncounterToStop);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopEncounterSequence(UFortAIEncounterSequence* SequenceToStop);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterInfo* StartMissionAIEncounterFromGeneratedProfile(int32 GeneratedEncounterProfileIndex, const TArray<AActor*>& TargetActors, UFortAIAssignmentSettings* AssignmentSettings, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay, bool bUseAssignments);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterInfo* StartMissionAIEncounter(TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, const TArray<AActor*>& TargetActors, UFortAIAssignmentSettings* AssignmentSettings, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<AActor*> SpawnAtPlacementActorsAsArray(AFortMission* Mission, bool& bSucceeded);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetUiVisibility(bool bInIsMissionVisible);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetToSilentDestroy();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetTimerElapsedComponent(UFortMissionTimerComponent* InTimerElapsedComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetTimerComponent(UFortMissionTimerComponent* InTimerComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetRespawnTextOverride(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionGameDifficulty(float GameDifficultyValue);
    
    UFUNCTION(BlueprintCallable)
    void SendBotLogicMessage(const FString& EventName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveParticipantAccount(FUniqueNetIdRepl& AbandoningPlayerId);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoalsFromEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const TArray<FFortAIGoalInfo> GoalInfos);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGoalFromEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const FFortAIGoalInfo GoalInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterForContainerSearchedEvent(FOnMissionContainerSearchedEvent Delegate, const FGameplayTagQuery& ContainerRequirements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RegisterForBuildingHarvestedByPlayerEvent(FOnMissionBuildingSMActorHarvestedEvent Delegate, const FGameplayTagQuery& HarvestedBuildingRequirements);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void RecordResourceActorSpawn(AActor* SpawnedActor);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ProvideAllPotentialBadges(const TArray<FGameplayTag>& BadgeTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnWaveCompleted(int32 Tier, int32 Wave, EFortCompletionResult Result);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_UIIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_QuestOwnerAccount();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PotentialBadgesArray();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionStatus();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MissionInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentFocusDisplayData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsMissionVisible();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveObjectives();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEncounterEnemyAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MissionTimerVisibilityOverrideSet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MissionTimerSet();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadPossibleMissionsManually(TArray<FGuid>& OutAddedMissionGuids, UPARAM(Ref) TArray<FFortPossibleMission>& PossibleMissionsToLoad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadMissionsManually(TArray<FGuid>& OutAddedMissionGuids, UPARAM(Ref) TArray<UFortMissionInfo*>& MissionsToLoad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsPlayerParticipating(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeModifiersRRV(int32 Seed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool InitializeActorsForMissionMatchingItemIdentifyingQuery(AFortMission* Mission, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActorsInitialized);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool InitializeActorsForMission(AFortMission* Mission, TArray<AActor*>& OutActorsInitialized);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMissionPar() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void HandleEnemyKilled(AFortPlayerController* KilledBy, AFortPawn* KilledPawn, const FGameplayTagContainer& SourceTags);
    
    UFUNCTION(BlueprintCallable)
    void HandleEncounterEnemyAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GrantRewardsByTag(const FGameplayTag RewardTag, TEnumAsByte<EFortRewardType::Type> RewardType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    void GetTieredModifierSet(FName TieredModifierSetName, TArray<FTieredModifierSetData>& OutModifierSetData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetSpawnLocationsMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<FVector>& SpawnLocations) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetSpawnLocationActorsMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    void GetSpawningDistanceMinMaxOverrideForAIEncounter(const UFortAIEncounterInfo* Encounter, float& OutSpawningDistanceMin, float& OutSpawningDistanceMax) const;
    
    UFUNCTION(BlueprintCallable)
    void GetRewardItemsByTag(const FGameplayTag RewardTag, TArray<UFortWorldItemDefinition*>& OutRewardItems);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    FText GetRespawnTextOverride() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetPawnDamageLootTier(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    TArray<AFortPlayerController*> GetParticipatingMissionControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortObjectiveStatus GetObjectiveStatusByHandle(const FGameplayTagContainer& ObjectiveHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTagContainer> GetObjectiveHandlesWithTag(FGameplayTag ObjectiveTag, int32 MaxNumberOfObjectives) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortObjectiveBase* GetObjectiveByHandle(const FGameplayTagContainer& ObjectiveHandle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMissionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetMissionGuid() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FText GetMissionCompletionResultText(EFortCompletionResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetExpectedCompletionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDaysRemainingBeforeOverPar() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentFocusPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCurrentFocusDisplayText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetCurrentBluGloRewards() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortMissionConfigData* GetConfigData(FGameplayTag InBucketTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    int32 GetBuildingDamageLootTier(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortClientAnnouncement_Basic> GetAnnouncementClassOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AFortObjectiveBase*> GetAllObjectives() const;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    bool GetAdditionalMissionSuccessBadges(TArray<UFortWorldItemDefinition*>& SuccessItems) const;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    int32 GetAdditionalMissionCompletionMissionPoints(EFortMissionStatus CompletionStatus) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool GetActorsSpawnedMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnedActors) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void FocusThisMission(FText FocusDisplayText, float FocusPercentage);
    
    //UFUNCTION(BlueprintCallable)
   // void FindGoalLocationsForEncounterAssignment(const FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, TArray<FVector> OutGoalLocations);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterSequence* CreateEncounterSequenceByIndex(int32 EncounterSequenceIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterSequence* CreateEncounterSequence(const FGameplayTagContainer SequenceTags);
    
    UFUNCTION(BlueprintCallable)
    EAssignmentCreationResult CreateEncounterAssignment(const FGameplayTagContainer AssignmentTags, const UFortAIEncounterInfo* Encounter, UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<UFortAIGoalProvider> GoalProvider, FFortAIAssignmentIdentifier AssignmentIdentifier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    FFortMissionWeightedReward ChooseRandomReward();
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintPostMissionLoad();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnStartPlaying();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnMissionEnd(EFortMissionStatus Status);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnActivated();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintCustomHandleMissionEvent(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, const UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, const FText& GenericText, FGameplayTagContainer GameplayTags, const FFortMissionEvent& MissionEvent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    bool BlueprintCanPlayerParticipate(AFortPlayerController* PlayerController) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AttemptMissionSave(const FString& OptionalSaveName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ApplyTieredModifierSet(const TArray<FTieredModifierSetData>& ModifierSetData, int32 Tier, int32 WaveNum, bool bDeferTemporaryModifiers, TArray<FActiveGameplayModifierHandle>& OutAppliedModifiers);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AddParticipantAccount(AFortPlayerController* PlayerController);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void AddOrRemoveTimerTime(float TimeToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const FFortAIGoalInfo GoalInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalToAssignment(UFortAIAssignment* Assignment, const FFortAIGoalInfo GoalInfo);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalsToEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const TArray<FFortAIGoalInfo> GoalInfos);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalsToAssignment(UFortAIAssignment* Assignment, const TArray<FFortAIGoalInfo> GoalInfos);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddCompletionTags(FGameplayTagContainer NewCompletionTagContainer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void AddCompletionTag(FGameplayTag NewCompletionTag);
    
    
    // Fix for true pure virtual functions not being implemented
};

