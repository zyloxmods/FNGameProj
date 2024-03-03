#include "FortCollectionBookSlotWidget.h"

void UFortCollectionBookSlotWidget::OnItemDestroyed() {
}


bool UFortCollectionBookSlotWidget::IsItemSlotted() const {
    return false;
}

bool UFortCollectionBookSlotWidget::HasItemsToSlot() const {
    return false;
}

void UFortCollectionBookSlotWidget::HandleUnslotItemComplete(const UFortAccountItem* UnslottedItem, const UFortAccountItem* OldItem, FName SlotId) {
}

void UFortCollectionBookSlotWidget::HandleSlottedItemOperationComplete(const UFortAccountItem* NewItem, FName TemplateId) {
}

void UFortCollectionBookSlotWidget::HandleResearchItemComplete(const UFortAccountItem* ResearchedItem, const FString& SlotId) {
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
    this->ItemCardSize = EFortItemCardSize::XXS;
    this->bIsRewardCard = true;
    this->ItemCardWidget = NULL;
    this->UnslottedOverlayWidget = NULL;
    this->ReadyToSlotOverlayWidget = NULL;
    this->UnslottedButReadyOverlayWidget = NULL;
    this->SlottedItemRepresentation = NULL;
}

