#include "FortStoreSummaryItemButton.h"

void UFortStoreSummaryItemButton::UpdateMulchListWithItem(bool bAddingItem) {
}

void UFortStoreSummaryItemButton::SetStoreCardObject(UStoreCardObject* CardObject) {
}

void UFortStoreSummaryItemButton::HandleMenuOpenChanged(bool bIsOpen) {
}


UStoreCardObject* UFortStoreSummaryItemButton::GetStoreCardObject() const {
    return NULL;
}

UWidget* UFortStoreSummaryItemButton::GetPopupMenu() {
    return NULL;
}

UFortStoreSummaryItemButton::UFortStoreSummaryItemButton() {
    this->HasAnItemMarkedForMulching = false;
    this->PopupMenuAnchor = NULL;
    this->StoreCardObject = NULL;
    this->InventoryContext = NULL;
}

