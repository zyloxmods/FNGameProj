#include "FortQuestManager.h"

bool UFortQuestManager::SetQuestPinned(UFortQuestItem* Quest, bool bEnabled) {
    return false;
}

void UFortQuestManager::SetQuestMapMode(EQuestMapScreenMode NewQuestMapMode) {
}

void UFortQuestManager::SendCustomStatEventDirect(FName ObjectiveBackendName, UFortQuestItem* QuestItem, int32 Count, bool bForceFlush) {
}

void UFortQuestManager::SendCustomStatEvent(FDataTableRowHandle ObjectiveStat, int32 Count, bool bForceFlush) {
}

void UFortQuestManager::SendComplexCustomStatEvent(UObject* TargetObject, FGameplayTagContainer AdditionalSourceTags, FGameplayTagContainer TargetTags, bool& QuestActive, bool& QuestCompleted, int32 Count) {
}

void UFortQuestManager::RerollDailyQuest(const UFortQuestItem* QuestToDiscard) const {
}

FString UFortQuestManager::PopNextPendingFeatureUnlock() {
    return TEXT("");
}

void UFortQuestManager::MarkQuestsSeen(bool bOnlyMarkPendingSeenQuests) const {
}

void UFortQuestManager::MarkQuestSeen(UFortQuestItem* Quest) {
}

void UFortQuestManager::ListChallenges(const FString& Filter) const {
}

bool UFortQuestManager::IsThisAnEventQuest(const UFortQuestItemDefinition* QuestDefinition, const FString& MatchQuestEventFlag, UDataTable* QuestTable) const {
    return false;
}

bool UFortQuestManager::IsQuestObjectiveActive(FName ObjectiveName) const {
    return false;
}

bool UFortQuestManager::IsQuestInProgress(const UFortQuestItemDefinition* Definition) const {
    return false;
}

bool UFortQuestManager::IsPendingFeatureUnlockNotification() const {
    return false;
}

bool UFortQuestManager::IsObjectiveWithNameInProgress(const UFortQuestItemDefinition* Definition, FName BackendName) const {
    return false;
}

bool UFortQuestManager::IsObjectiveInProgress(const UFortQuestItemDefinition* Definition, FDataTableRowHandle ObjectiveStatHandle) const {
    return false;
}

bool UFortQuestManager::IsMainQuest(UFortQuestItem* Quest) {
    return false;
}

void UFortQuestManager::InitializeQuestAbilities(APawn* PlayerPawn) {
}

bool UFortQuestManager::HasUnseenQuests() {
    return false;
}

bool UFortQuestManager::HasUnsavedPrimaryMissionProgress() const {
    return false;
}

bool UFortQuestManager::HasQuestBeenSeenLocally(const UFortQuestItem* Quest) const {
    return false;
}

bool UFortQuestManager::HasCompletedQuest(const UFortQuestItemDefinition* Definition) const {
    return false;
}

bool UFortQuestManager::HasCompletedObjectiveWithName(const UFortQuestItemDefinition* Definition, FName BackendName) const {
    return false;
}

bool UFortQuestManager::HasCompletedObjective(const UFortQuestItemDefinition* Definition, FDataTableRowHandle ObjectiveStatHandle) const {
    return false;
}

void UFortQuestManager::HandleQuestUpdated(AFortPlayerController* QuestOwner, const UFortQuestItemDefinition* QuestDef, FName BackendName, int32 CompletionCount, int32 DeltaChange, const AFortPlayerState* AssistingPlayer, bool ObjectiveCompleted, bool QuestCompleted) {
}

void UFortQuestManager::GrantFirstDailyQuest() {
}

void UFortQuestManager::GiveAthenaXp(float XpAmount) {
}

int32 UFortQuestManager::GetUnseenQuestCount() {
    return 0;
}

void UFortQuestManager::GetSourceAndContextTags(FGameplayTagContainer& OutSourceTags, FGameplayTagContainer& OutContextTags) const {
}

int32 UFortQuestManager::GetRemainingQuestPoolRerolls(const FString& PoolName) const {
    return 0;
}

int32 UFortQuestManager::GetRemainingDailyQuestRerolls() const {
    return 0;
}

UFortQuestItem* UFortQuestManager::GetQuestWithDefinition(const UFortQuestItemDefinition* Definition) const {
    return NULL;
}

void UFortQuestManager::GetQuestsFromCategory(UFortQuestCategory* Category, TArray<UFortQuestItem*>& QuestList) {
}

EQuestMapScreenMode UFortQuestManager::GetQuestMapMode() const {
    return EQuestMapScreenMode::Invalid;
}

UFortQuestCategory* UFortQuestManager::GetQuestCategory(UFortQuestItem* QuestItem) {
    return NULL;
}

AFortPlayerController* UFortQuestManager::GetPlayerControllerBP() const {
    return NULL;
}

void UFortQuestManager::GetPinnedQuests(TArray<UFortQuestItem*>& OutPinnedQuestItems) {
}

int32 UFortQuestManager::GetObjectiveCompletionCount(const UFortQuestItemDefinition* Definition, FName BackendName) const {
    return 0;
}

int32 UFortQuestManager::GetNumCompletedObjectives(const UFortQuestItemDefinition* Definition) {
    return 0;
}

UFortQuestItem* UFortQuestManager::GetNextUnseenQuest(EFortQuestType QuestType) {
    return NULL;
}

UFortQuestItem* UFortQuestManager::GetMainQuest() const {
    return NULL;
}

void UFortQuestManager::GetCurrentQuestsCategories(TArray<UFortQuestCategory*>& Categories) {
}

void UFortQuestManager::GetCurrentQuests(TArray<UFortQuestItem*>& OutCurrentQuests) const {
}

void UFortQuestManager::GetCompletedQuests(TArray<UFortQuestItem*>& OutCompletedQuests) {
}

UFortQuestItem* UFortQuestManager::GetBroadcasterQuestWithOpenWindow() {
    return NULL;
}

void UFortQuestManager::GetBattlePassQuestsInProgress(const int32 MaxCount, const UFortItemDefinition* RequiredReward, TArray<UFortQuestItem*>& OutQuests, bool& bAllQuestsComplete) const {
}

void UFortQuestManager::ForceTriggerQuestsUpdated() {
}

void UFortQuestManager::ForceCompleteAccolades(float TimerDelay, bool bSkipAcknowledgements) {
}

void UFortQuestManager::EnableQuestStateLogging() {
}

void UFortQuestManager::DisableQuestStateLogging() {
}

void UFortQuestManager::ClaimSelectedQuestReward(const UFortQuestItem* Quest, int32 RewardIndex) const {
}

void UFortQuestManager::ClaimQuestReward(const UFortQuestItem* Quest) const {
}

void UFortQuestManager::CheckObjectiveStatUsage() {
}

bool UFortQuestManager::CanProgressQuestInCurrentZone(const UFortQuestItemDefinition* QuestItemDefinition) const {
    return false;
}

void UFortQuestManager::AppendTemporaryRelevancyTags(const FGameplayTagContainer& SourceTags, const FGameplayTagContainer& ContextTags, const FGameplayTagContainer& TargetTags) {
}

UFortQuestManager::UFortQuestManager() {
    DamageEventFlushDelaySeconds = 1;
    BuildingEventFlushDelaySeconds = 1;
    bDoQuestStateLogging = false;
    bBlockBRXPWhenDead = true;
    bFlatCurrentQuestsSearch = false;
    bBlockQuestCompletion = false;
    bBlockAthenaQuestCompletion = false;
    bBlockStWQuestCompletion = false;
    bBlockXPEventsInAnyAAState = false;
    bBlockAthenaQuestCompletionInCompetitive = false;
    bBlockPartyAssist = true;
    bUseSquadForPartyAssist = true;
    bBlockAthenaFeatsCompletionInCompetitive = true;
    bAllowAthenaMCPNotifyOnComplete = true;
    QuestMapMode = EQuestMapScreenMode::Invalid;
}

