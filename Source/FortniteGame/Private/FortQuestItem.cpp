#include "FortQuestItem.h"

bool UFortQuestItem::ShouldDisplayOverallQuestInformation() const {
    return false;
}

bool UFortQuestItem::IsVisibleToUser(bool bAllowClaimedQuestsToBeVisible) const {
    return false;
}

bool UFortQuestItem::IsQuestPinned() const {
    return false;
}

bool UFortQuestItem::IsQuestInProgress() const {
    return false;
}

bool UFortQuestItem::IsObjectiveWithNameInProgress(FName BackendName) const {
    return false;
}

bool UFortQuestItem::IsObjectiveInProgress(FDataTableRowHandle ObjectiveStatHandle) const {
    return false;
}

bool UFortQuestItem::IsIncludedInCategories() const {
    return false;
}

bool UFortQuestItem::HasVisibleRewards() const {
    return false;
}

bool UFortQuestItem::HasQuestExpired(FDateTime UtcNow) const {
    return false;
}

bool UFortQuestItem::HasCompletedQuest() const {
    return false;
}

bool UFortQuestItem::HasCompletedObjectiveWithName(FName BackendName) const {
    return false;
}

bool UFortQuestItem::HasCompletedObjective(FDataTableRowHandle ObjectiveStatHandle) const {
    return false;
}

FString UFortQuestItem::GetTwitchBroadcasterChannelId() const {
    return TEXT("");
}

FFortRewardInfo UFortQuestItem::GetRewardInfo() const {
    return FFortRewardInfo{};
}

FTimespan UFortQuestItem::GetRemainingExpirationDuration(FDateTime UtcNow) const {
    return FTimespan{};
}

EFortQuestState UFortQuestItem::GetQuestState() const {
    return EFortQuestState::Inactive;
}

FString UFortQuestItem::GetQuestPool() const {
    return TEXT("");
}

UFortQuestItemDefinition* UFortQuestItem::GetQuestDefinitionBP() const {
    return NULL;
}

TArray<FFortItemInstanceQuantityPair> UFortQuestItem::GetPreviewSelectableRewards(int32 RewardIndex) const {
    return TArray<FFortItemInstanceQuantityPair>();
}

TArray<FFortItemInstanceQuantityPair> UFortQuestItem::GetPreviewRewards() const {
    return TArray<FFortItemInstanceQuantityPair>();
}

TArray<FFortItemInstanceQuantityPair> UFortQuestItem::GetPreviewAllSelectableRewards() const {
    return TArray<FFortItemInstanceQuantityPair>();
}

float UFortQuestItem::GetPercentageComplete() const {
    return 0.0f;
}

UFortQuestObjectiveInfo* UFortQuestItem::GetObjectiveInfo(FDataTableRowHandle ObjectiveStatHandle) const {
    return NULL;
}

int32 UFortQuestItem::GetNumObjectivesComplete() const {
    return 0;
}

UFortMissionConfigData* UFortQuestItem::GetMissionConfigData(FGameplayTag InBucketTag) {
    return NULL;
}

FFortRewardInfo UFortQuestItem::GetChallengeChainRewardInfo(bool bGetCurrentChainQuestOnly) const {
    return FFortRewardInfo{};
}

FDateTime UFortQuestItem::GetBroadcasterGrantWindowEnd() const {
    return FDateTime{};
}

void UFortQuestItem::GetAchievedCount(int32& OutTotalAchievedCount, int32& OutTotalRequiredCount) const {
}

bool UFortQuestItem::DoesQuestExpire() const {
    return false;
}

bool UFortQuestItem::CanPinQuest() const {
    return false;
}

UFortQuestItem::UFortQuestItem() {
    this->LastNotifiedQuestCount = 0;
    this->quest_state = EFortQuestState::Inactive;
    this->sent_new_notification = false;
    this->bSentCompleteNotification = false;
    this->bAllObjectivesComplete = false;
    this->CurrentStage = 0;
}

