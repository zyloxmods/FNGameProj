#include "FortCollectionBookGenericRewardWidget.h"

void UFortCollectionBookGenericRewardWidget::SetRewardStatus(ECollectionBookRewardStatus Status) {
}

void UFortCollectionBookGenericRewardWidget::SetRewards(const FFortRewardInfo& Rewards) {
}

void UFortCollectionBookGenericRewardWidget::SetCurrentItemToDisplay(UFortItem* ItemToDisplay) {
}

void UFortCollectionBookGenericRewardWidget::OnRewardStatusChanged_Implementation(ECollectionBookRewardStatus NewStatus) {
}

bool UFortCollectionBookGenericRewardWidget::HasRewards() const {
    return false;
}

ECollectionBookRewardStatus UFortCollectionBookGenericRewardWidget::GetRewardStatus() const {
    return ECollectionBookRewardStatus::Unknown;
}

void UFortCollectionBookGenericRewardWidget::ClearRewards() {
}

UFortCollectionBookGenericRewardWidget::UFortCollectionBookGenericRewardWidget() {
    this->bUpdateVisibilityBasedOnRewardExistence = false;
    this->VisibilityWhenNoRewardSpecified = ESlateVisibility::Collapsed;
    this->VisibilityWhenRewardSpecified = ESlateVisibility::SelfHitTestInvisible;
    this->RewardCardWidget = NULL;
    this->RewardStatus = ECollectionBookRewardStatus::Unknown;
}

