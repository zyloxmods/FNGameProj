#include "FortRewardInfoButton.h"


void UFortRewardInfoButton::SetShowDescription(bool bInShowDescription) {
}

void UFortRewardInfoButton::SetItemInstanceQuantityPair(const FFortItemInstanceQuantityPair& ItemQuantityPair) {
}


int32 UFortRewardInfoButton::GetQuantity() const {
    return 0;
}

UFortItem* UFortRewardInfoButton::GetItemInstance() const {
    return NULL;
}

UFortRewardInfoButton::UFortRewardInfoButton() {
    this->ItemCardPanel = NULL;
    this->ItemCardSize = EFortItemCardSize::XXS;
    this->bDisplayAsRewardCard = false;
    this->ItemInstance = NULL;
}

