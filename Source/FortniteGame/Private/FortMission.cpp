#include "FortMission.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

void AFortMission::StopMissionAIEncounter(UFortAIEncounterInfo* EncounterToStop) {
}

void AFortMission::StopEncounterSequence(UFortAIEncounterSequence* SequenceToStop) {
}

UFortAIEncounterInfo* AFortMission::StartMissionAIEncounterFromGeneratedProfile(int32 GeneratedEncounterProfileIndex, const TArray<AActor*>& TargetActors, UFortAIAssignmentSettings* AssignmentSettings, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay, bool bUseAssignments) {
    return NULL;
}

UFortAIEncounterInfo* AFortMission::StartMissionAIEncounter(TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, const TArray<AActor*>& TargetActors, UFortAIAssignmentSettings* AssignmentSettings, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay) {
    return NULL;
}

TArray<AActor*> AFortMission::SpawnAtPlacementActorsAsArray(AFortMission* Mission, bool& bSucceeded) {
    return TArray<AActor*>();
}

void AFortMission::SetUiVisibility(bool bInIsMissionVisible) {
}

void AFortMission::SetToSilentDestroy() {
}

void AFortMission::SetTimerElapsedComponent(UFortMissionTimerComponent* InTimerElapsedComponent) {
}

void AFortMission::SetTimerComponent(UFortMissionTimerComponent* InTimerComponent) {
}

void AFortMission::SetRespawnTextOverride(const FText& NewText) {
}

void AFortMission::SetMissionGameDifficulty(float GameDifficultyValue) {
}

void AFortMission::SendBotLogicMessage(const FString& EventName) {
}

bool AFortMission::RemoveParticipantAccount(FUniqueNetIdRepl& AbandoningPlayerId) {
    return false;
}

void AFortMission::RemoveGoalsFromEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const TArray<FFortAIGoalInfo> GoalInfos) {
}

void AFortMission::RemoveGoalFromEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const FFortAIGoalInfo GoalInfo) {
}

void AFortMission::RegisterForContainerSearchedEvent(FOnMissionContainerSearchedEvent Delegate, const FGameplayTagQuery& ContainerRequirements) {
}

void AFortMission::RegisterForBuildingHarvestedByPlayerEvent(FOnMissionBuildingSMActorHarvestedEvent Delegate, const FGameplayTagQuery& HarvestedBuildingRequirements) {
}

void AFortMission::RecordResourceActorSpawn(AActor* SpawnedActor) {
}

void AFortMission::ProvideAllPotentialBadges(const TArray<FGameplayTag>& BadgeTags) {
}

void AFortMission::OnWaveCompleted(int32 Tier, int32 Wave, EFortCompletionResult Result) {
}

void AFortMission::OnRep_UIIndex() {
}

void AFortMission::OnRep_QuestOwnerAccount() {
}

void AFortMission::OnRep_PotentialBadgesArray() {
}

void AFortMission::OnRep_MissionStatus() {
}

void AFortMission::OnRep_MissionInfo() {
}

void AFortMission::OnRep_CurrentFocusDisplayData() {
}

void AFortMission::OnRep_bIsMissionVisible() {
}

void AFortMission::OnRep_ActiveObjectives() {
}



void AFortMission::MissionTimerSet_Implementation() {
}

void AFortMission::LoadPossibleMissionsManually(TArray<FGuid>& OutAddedMissionGuids, TArray<FFortPossibleMission>& PossibleMissionsToLoad) {
}

void AFortMission::LoadMissionsManually(TArray<FGuid>& OutAddedMissionGuids, TArray<UFortMissionInfo*>& MissionsToLoad) {
}

bool AFortMission::IsPlayerParticipating(AFortPlayerController* PlayerController) const {
    return false;
}

void AFortMission::InitializeModifiersRRV(int32 Seed) {
}

bool AFortMission::InitializeActorsForMissionMatchingItemIdentifyingQuery(AFortMission* Mission, const FGameplayTagQuery& TagQuery, TArray<AActor*>& OutActorsInitialized) {
    return false;
}

bool AFortMission::InitializeActorsForMission(AFortMission* Mission, TArray<AActor*>& OutActorsInitialized) {
    return false;
}

bool AFortMission::HasMissionPar() const {
    return false;
}


void AFortMission::HandleEncounterEnemyAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy) {
}

void AFortMission::GrantRewardsByTag(const FGameplayTag RewardTag, TEnumAsByte<EFortRewardType::Type> RewardType) {
}

void AFortMission::GetTieredModifierSet(FName TieredModifierSetName, TArray<FTieredModifierSetData>& OutModifierSetData) {
}

bool AFortMission::GetSpawnLocationsMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<FVector>& SpawnLocations) const {
    return false;
}

bool AFortMission::GetSpawnLocationActorsMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnLocationActors) const {
    return false;
}

void AFortMission::GetSpawningDistanceMinMaxOverrideForAIEncounter_Implementation(const UFortAIEncounterInfo* Encounter, float& OutSpawningDistanceMin, float& OutSpawningDistanceMax) const {
}

void AFortMission::GetRewardItemsByTag(const FGameplayTag RewardTag, TArray<UFortWorldItemDefinition*>& OutRewardItems) {
}

FText AFortMission::GetRespawnTextOverride_Implementation() const {
    return FText::GetEmpty();
}

int32 AFortMission::GetPawnDamageLootTier(AFortPlayerController* PlayerController) const {
    return 0;
}

TArray<AFortPlayerController*> AFortMission::GetParticipatingMissionControllers() const {
    return TArray<AFortPlayerController*>();
}

EFortObjectiveStatus AFortMission::GetObjectiveStatusByHandle(const FGameplayTagContainer& ObjectiveHandle) const {
    return EFortObjectiveStatus::Created;
}

TArray<FGameplayTagContainer> AFortMission::GetObjectiveHandlesWithTag(FGameplayTag ObjectiveTag, int32 MaxNumberOfObjectives) const {
    return TArray<FGameplayTagContainer>();
}

AFortObjectiveBase* AFortMission::GetObjectiveByHandle(const FGameplayTagContainer& ObjectiveHandle) const {
    return NULL;
}

FText AFortMission::GetMissionName() const {
    return FText::GetEmpty();
}

FGuid AFortMission::GetMissionGuid() const {
    return FGuid{};
}

FText AFortMission::GetMissionCompletionResultText_Implementation(EFortCompletionResult Result) {
    return FText::GetEmpty();
}

float AFortMission::GetExpectedCompletionTime_Implementation() const {
    return 0.0f;
}

int32 AFortMission::GetDaysRemainingBeforeOverPar() const {
    return 0;
}

float AFortMission::GetCurrentFocusPercentage() const {
    return 0.0f;
}

FText AFortMission::GetCurrentFocusDisplayText() const {
    return FText::GetEmpty();
}

int32 AFortMission::GetCurrentBluGloRewards_Implementation() const {
    return 0;
}

UFortMissionConfigData* AFortMission::GetConfigData(FGameplayTag InBucketTag) {
    return NULL;
}

int32 AFortMission::GetBuildingDamageLootTier(AFortPlayerController* PlayerController) const {
    return 0;
}

TSubclassOf<AFortClientAnnouncement_Basic> AFortMission::GetAnnouncementClassOverride() const {
    return NULL;
}

TArray<AFortObjectiveBase*> AFortMission::GetAllObjectives() const {
    return TArray<AFortObjectiveBase*>();
}



bool AFortMission::GetActorsSpawnedMatchingQuery(const FGameplayTagQuery& TagQuery, TArray<AActor*>& SpawnedActors) const {
    return false;
}

void AFortMission::FocusThisMission(FText FocusDisplayText, float FocusPercentage) {
}
/*
void AFortMission::FindGoalLocationsForEncounterAssignment(const FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, TArray<FVector>& OutGoalLocations) {
}
*/
UFortAIEncounterSequence* AFortMission::CreateEncounterSequenceByIndex(int32 EncounterSequenceIndex) {
    return NULL;
}

UFortAIEncounterSequence* AFortMission::CreateEncounterSequence(const FGameplayTagContainer SequenceTags) {
    return NULL;
}

EAssignmentCreationResult AFortMission::CreateEncounterAssignment(const FGameplayTagContainer AssignmentTags, const UFortAIEncounterInfo* Encounter, UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<UFortAIGoalProvider> GoalProvider, FFortAIAssignmentIdentifier AssignmentIdentifier) {
    return EAssignmentCreationResult::AssignmentNotFoundOrCreated;
}

FFortMissionWeightedReward AFortMission::ChooseRandomReward() {
    return FFortMissionWeightedReward{};
}






bool AFortMission::BlueprintCanPlayerParticipate_Implementation(AFortPlayerController* PlayerController) const {
    return false;
}

void AFortMission::AttemptMissionSave(const FString& OptionalSaveName) {
}

void AFortMission::ApplyTieredModifierSet(const TArray<FTieredModifierSetData>& ModifierSetData, int32 Tier, int32 WaveNum, bool bDeferTemporaryModifiers, TArray<FActiveGameplayModifierHandle>& OutAppliedModifiers) {
}

bool AFortMission::AddParticipantAccount(AFortPlayerController* PlayerController) {
    return false;
}

void AFortMission::AddOrRemoveTimerTime_Implementation(float TimeToAdd) {
}

void AFortMission::AddGoalToEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const FFortAIGoalInfo GoalInfo) {
}

void AFortMission::AddGoalToAssignment(UFortAIAssignment* Assignment, const FFortAIGoalInfo GoalInfo) {
}

void AFortMission::AddGoalsToEncounterAssignment(FFortAIAssignmentIdentifier AssignmentIdentifier, const UFortAIEncounterInfo* Encounter, const TArray<FFortAIGoalInfo> GoalInfos) {
}

void AFortMission::AddGoalsToAssignment(UFortAIAssignment* Assignment, const TArray<FFortAIGoalInfo> GoalInfos) {
}

void AFortMission::AddCompletionTags(FGameplayTagContainer NewCompletionTagContainer) {
}

void AFortMission::AddCompletionTag(FGameplayTag NewCompletionTag) {
}

void AFortMission::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMission, MissionInfo);
    DOREPLIFETIME(AFortMission, MissionCategory);
    DOREPLIFETIME(AFortMission, UIIndex);
    DOREPLIFETIME(AFortMission, QuestOwnerAccount);
    DOREPLIFETIME(AFortMission, MissionActivationTime);
    DOREPLIFETIME(AFortMission, CurrentFocusData);
    DOREPLIFETIME(AFortMission, bSilentDestroyNextFrame);
    DOREPLIFETIME(AFortMission, ActiveObjectives);
    DOREPLIFETIME(AFortMission, ParticipatingAccounts);
    DOREPLIFETIME(AFortMission, ParticipatingButDisconnectedAccounts);
    DOREPLIFETIME(AFortMission, MissionStatus);
    DOREPLIFETIME(AFortMission, bIsMissionVisible);
    DOREPLIFETIME(AFortMission, MissionAudibility);
    DOREPLIFETIME(AFortMission, MissionGuid);
    DOREPLIFETIME(AFortMission, StartingDay);
    DOREPLIFETIME(AFortMission, ChosenRewardIdx);
    DOREPLIFETIME(AFortMission, PotentialBadgesArray);
}

AFortMission::AFortMission() {
    MissionInfo = NULL;
    BotLogicClass = NULL;
    BotLogic = NULL;
    AnnouncementClassOverride = NULL;
    MissionGenerator = NULL;
    MissionCategory = EMissionGenerationCategory::Primary;
    UIIndex = 0;
    bLoadedFromRecord = false;
    bFiredParTimeEvent = false;
    bAreNonpublicMatchesLeecherExempt = false;
    LeecherPity = 1;
    LeecherMinMultiplier = 1;
    LeecherCutoff = 1;
    LeecherTimeScalingCutoff = 1;
    LeecherTimeScalingPenaltyMultipler = 1;
    LeecherCombatScoreMultiplier = 1;
    LeecherBuildingScoreMultiplier = 1;
    LeecherUtilityScoreMultiplier = 1;
    LeecherCombatLowBar = 0;
    LeecherBuildingLowBar = 0;
    LeecherUtilityLowBar = 0;
    MissionActivationTime = 1;
    bSilentDestroyNextFrame = false;
    MissionStatus = EFortMissionStatus::Created;
    bIsMissionVisible = true;
    MissionAudibility = EFortMissionAudibility::UseVisibility;
    CurrentObjectiveBlockIndex = 0;
    bIsMissionVisibleOverride = true;
    StartingDay = 0;
    TimerComponent = NULL;
    TimerElapsedComponent = NULL;
    bObjectiveTimerExpireShouldFailObjectives = false;
    bMissionTimerExpireShouldFailMission = false;
    bNeedsEnemyKilledEventForAllPawns = false;
    ChosenRewardIdx = 0;
    MissionCompletionStinger = NULL;
}

