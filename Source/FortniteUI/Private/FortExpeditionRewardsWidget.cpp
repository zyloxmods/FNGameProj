#include "FortExpeditionRewardsWidget.h"

void UFortExpeditionRewardsWidget::RefreshRewardsUI_Implementation(const UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, const TArray<FFortItemInstanceQuantityPair>& Rewards) {
}

void UFortExpeditionRewardsWidget::ProcessNextReward() {
}

void UFortExpeditionRewardsWidget::HandleCollectionExpeditionCompleted(bool bMcpSuccess, const UFortExpeditionItem* Expedition, bool bExpeditionSuccess, const TArray<FFortItemInstanceQuantityPair>& Rewards) {
}

UFortExpeditionRewardsWidget::UFortExpeditionRewardsWidget() {
    this->RewardsTileView = NULL;
    this->bPendingCollection = false;
}

