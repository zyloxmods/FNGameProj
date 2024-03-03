#include "FortRewardInfoWidget.h"

void UFortRewardInfoWidget::SetRewards(const FFortRewardInfo& RewardsIn) {
}

void UFortRewardInfoWidget::SetReward(const FFortItemQuantityPair& RewardIn) {
}

void UFortRewardInfoWidget::SetButtonGroup(UCommonButtonGroup* InButtonGroup) {
}

bool UFortRewardInfoWidget::ContainsReward(const FString& TemplateIdToCheck) {
    return false;
}

UFortRewardInfoWidget::UFortRewardInfoWidget() {
    this->RewardListWidget = NULL;
    this->HorizontalAlignment = HAlign_Center;
    this->VerticalAlignment = VAlign_Center;
    this->bShowDescription = false;
    this->bAllowItemInteraction = false;
    this->MaxNumRewardsShown = 0;
    this->OrWidgetType = NULL;
    this->RewardInfoButtonType = NULL;
    this->ButtonGroup = NULL;
}

