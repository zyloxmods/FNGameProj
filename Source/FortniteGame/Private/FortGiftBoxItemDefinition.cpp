#include "FortGiftBoxItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortGiftBoxItemDefinition::TryLoadPreMessageWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass) {
    return false;
}

bool UFortGiftBoxItemDefinition::TryLoadHeaderSubWidgetClass(TSubclassOf<UUserWidget>& OutWidgetClass) {
    return false;
}

bool UFortGiftBoxItemDefinition::HasPreMessageWidget() const {
    return false;
}

bool UFortGiftBoxItemDefinition::HasHeaderSubWidget() const {
    return false;
}

UFortGiftBoxItemDefinition::UFortGiftBoxItemDefinition() {
    this->RestrictToSubgame = ESubGame::Campaign;
    this->GiftWrapType = EFortGiftWrapType::System;
    this->SortPriority = 0;
    this->bReuseExistingBoxIfPossible = false;
}

