#include "FortCollectionBookSlotWidget.h"

void UFortCollectionBookSlotWidget::OnUnslotItemComplete(const UFortAccountItem* UnslottedItem, const UFortAccountItem* OldItem, FName SlotId) {
}

void UFortCollectionBookSlotWidget::OnSlottedItemOperationComplete(const UFortAccountItem* ItemSlotted, FName SlotId) {
}

void UFortCollectionBookSlotWidget::OnItemDestroyed() {
}


bool UFortCollectionBookSlotWidget::IsItemSlotted() const {
    return false;
}

bool UFortCollectionBookSlotWidget::HasItemsToSlot() const {
    return false;
}

UFortItem* UFortCollectionBookSlotWidget::GetSlottedItemRepresentation() const {
    return NULL;
}

FName UFortCollectionBookSlotWidget::GetSlotRowName() const {
    return NAME_None;
}

int32 UFortCollectionBookSlotWidget::GetNumItemsToSlot() const {
    return 0;
}

UFortCollectionBookSlotWidget::UFortCollectionBookSlotWidget() {
    this->ItemCardSize = EFortItemCardSize::S;
    this->bIsRewardCard = true;
    this->ItemCardWidget = NULL;
    this->UnslottedOverlayWidget = NULL;
    this->ReadyToSlotOverlayWidget = NULL;
    this->UnslottedButReadyOverlayWidget = NULL;
    this->SlottedItemRepresentation = NULL;
}

