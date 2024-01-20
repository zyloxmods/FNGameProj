#include "FortWorldItem.h"

bool UFortWorldItem::SeenInFrontend() const {
    return false;
}

void UFortWorldItem::MarkItemAsSeenInFrontend() {
}

void UFortWorldItem::GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const {
}

int32 UFortWorldItem::GetFuelChargeValue() const {
    return 0;
}

UFortWorldItem::UFortWorldItem() {
    this->bIsTemporaryItem = false;
    this->bNeedsPersistentUpdate = false;
    this->bPendingPersistentDelete = false;
    this->OwnerInventory = NULL;
}

