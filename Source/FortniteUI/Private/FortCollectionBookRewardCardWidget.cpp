#include "FortCollectionBookRewardCardWidget.h"

void UFortCollectionBookRewardCardWidget::SetRewards(const FFortRewardInfo& Rewards) {
}

bool UFortCollectionBookRewardCardWidget::HasRewards() const {
    return false;
}

void UFortCollectionBookRewardCardWidget::ClearRewards() {
}

UFortCollectionBookRewardCardWidget::UFortCollectionBookRewardCardWidget() {
    this->ItemCardWidget = NULL;
    this->MultiItemRewardOverlay = NULL;
    this->ChoiceRewardOverlay = NULL;
    this->CheckmarkImage = NULL;
    this->UpdateCardInterval = 2.00f;
    this->ItemCardSize = EFortItemCardSize::XS;
    this->bDisplayAsRewardCard = true;
}

