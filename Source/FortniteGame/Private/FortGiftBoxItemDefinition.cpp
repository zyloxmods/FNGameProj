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

UFortGiftBoxItemDefinition::UFortGiftBoxItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    RestrictToSubgame = ESubGame::Campaign;
    GiftWrapType = EFortGiftWrapType::System;
    SortPriority = 0;
    bReuseExistingBoxIfPossible = false;
}

