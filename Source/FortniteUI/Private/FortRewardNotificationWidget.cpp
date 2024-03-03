#include "FortRewardNotificationWidget.h"

void UFortRewardNotificationWidget::ShowMulchConfirmationModal() {
}

void UFortRewardNotificationWidget::SetPrimaryActionText(FText Text) {
}

void UFortRewardNotificationWidget::SetPrimaryActionHidden() {
}

void UFortRewardNotificationWidget::SetPrimaryActionEnabled(bool bEnabled) {
}

void UFortRewardNotificationWidget::ResetAllRewardData() {
}

void UFortRewardNotificationWidget::PopulateReward(const UFortRewardNotificationData* Reward) {
}

















void UFortRewardNotificationWidget::NotifyPanelDeactivated() {
}

void UFortRewardNotificationWidget::NotifyPanelActivated() {
}

void UFortRewardNotificationWidget::MarkDefaultItemsForMulch(const TArray<FFortItemInstanceQuantityPair> ItemList) {
}

void UFortRewardNotificationWidget::IsPrimaryActionHidden(bool& bHidden) {
}

void UFortRewardNotificationWidget::IsPrimaryActionEnabled(bool& bEnabled) {
}


void UFortRewardNotificationWidget::HideMulchConfirmationModal() {
}

void UFortRewardNotificationWidget::HandleOnQuestRewardClaimed(const UFortQuestItem* Quest, const TArray<FFortItemInstanceQuantityPair>& Rewards) {
}

void UFortRewardNotificationWidget::HandleOnNoQuestRewardsToClaim() {
}

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpenFailed() {
}

void UFortRewardNotificationWidget::HandleOnMissionRewardsOpened(const TArray<FFortItemInstanceQuantityPair>& MissionRewards) {
}

void UFortRewardNotificationWidget::HandleOnMissionAlertRewardsOpened(const TArray<FFortItemInstanceQuantityPair>& AlertRewards) {
}

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimFailed() {
}

void UFortRewardNotificationWidget::HandleOnItemCacheRewardsClaimed(const TArray<FFortItemInstanceQuantityPair>& ClaimedRewards) {
}

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimFailed() {
}

void UFortRewardNotificationWidget::HandleOnDifficultyIncreaseRewardsClaimed(const TArray<FFortItemInstanceQuantityPair>& DifficultyRewards) {
}

void UFortRewardNotificationWidget::HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, const TArray<FFortItemInstanceQuantityPair>& ActualRewards) {
}

void UFortRewardNotificationWidget::BeginCloseRewardsScreen() {
}

void UFortRewardNotificationWidget::AddQuestData(UFortQuestItem* Quest) {
}

void UFortRewardNotificationWidget::AddPhoenixLevelUpRewardData() {
}

void UFortRewardNotificationWidget::AddMissionData() {
}

void UFortRewardNotificationWidget::AddMissionAlertData() {
}

void UFortRewardNotificationWidget::AddItemCacheRewardData(UFortItem* ItemCache) {
}

void UFortRewardNotificationWidget::AddGiftBoxData() {
}

void UFortRewardNotificationWidget::AddExpeditionData(UFortExpeditionItem* ExpeditionItem) {
}

void UFortRewardNotificationWidget::AddEpicQuestData(UFortQuestItem* Quest) {
}

void UFortRewardNotificationWidget::AddDifficultyIncreaseRewardData() {
}

void UFortRewardNotificationWidget::AddCollectionBookData(const FFortCollectionBookRewards& CollectionBookRewards) {
}

UFortRewardNotificationWidget::UFortRewardNotificationWidget() {
    this->OverlayMain = NULL;
    this->MulchConfirmationModalClass = NULL;
    this->MulchConfirmationModal = NULL;
}

