#include "FortItemManagementItemTileButton.h"

void UFortItemManagementItemTileButton::OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}









UWidget* UFortItemManagementItemTileButton::GetPopupMenu() {
    return NULL;
}

EFortItemManagementMode UFortItemManagementItemTileButton::GetItemManagementMode() const {
    return EFortItemManagementMode::Details;
}

FHomebaseSquadSlotId UFortItemManagementItemTileButton::GetHomebaseSquadSlotForItem() const {
    return FHomebaseSquadSlotId{};
}

UFortItemManagementItemTileButton::UFortItemManagementItemTileButton() {
    this->HasTheItemToDetail = false;
    this->HasTheItemToCompareDetailsWith = false;
    this->HasAnItemMarkedForMulching = false;
    this->MulchCount = 0;
    this->NotCraftableOverlay = NULL;
    this->PopupMenuAnchor = NULL;
    this->ShowCollectionBookIndicator = false;
    this->ShowRefundIndicator = false;
    this->InventoryContext = NULL;
}

