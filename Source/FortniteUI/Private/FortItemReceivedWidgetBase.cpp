#include "FortItemReceivedWidgetBase.h"


void UFortItemReceivedWidgetBase::SetGiftBoxItem(UFortGiftBoxItem* NewGiftBoxItem) {
}

void UFortItemReceivedWidgetBase::SetAlignmentOnSlots(UScrollBox* Widget) {
}

void UFortItemReceivedWidgetBase::SetAlignmentOnSlot(UScrollBox* Widget, int32 Index) {
}

void UFortItemReceivedWidgetBase::OnGiftBoxItemSetInternal(bool bFromSelf) {
}


UFortItem* UFortItemReceivedWidgetBase::GetTemporaryInstance(const FFortReceivedItemLootInfo& ItemReference) {
    return NULL;
}

void UFortItemReceivedWidgetBase::ClosingGiftbox() {
}

UFortItemReceivedWidgetBase::UFortItemReceivedWidgetBase() {
    this->GiftBoxItem = NULL;
    this->HeaderContainer = NULL;
    this->GiftScrollBox = NULL;
    this->ItemCardClass = NULL;
}

