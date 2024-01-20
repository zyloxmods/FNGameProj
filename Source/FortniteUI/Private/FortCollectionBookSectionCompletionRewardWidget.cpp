#include "FortCollectionBookSectionCompletionRewardWidget.h"

void UFortCollectionBookSectionCompletionRewardWidget::HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

UFortCollectionBookSectionCompletionRewardWidget::UFortCollectionBookSectionCompletionRewardWidget() {
    this->RewardDetailsButton = NULL;
    this->RewardDetailsModalWidget = NULL;
    this->Section = NULL;
}

