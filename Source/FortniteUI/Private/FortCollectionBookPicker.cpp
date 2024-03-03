#include "FortCollectionBookPicker.h"

void UFortCollectionBookPicker::SlotItemConfirmationComplete(UFortItem* CommittedItem, FFortDialogExternalLatentActionHandle LatentActionHandle) {
}

void UFortCollectionBookPicker::ShowMulchDialogForItem(UFortItem* ItemToMulch) {
}

void UFortCollectionBookPicker::ShowMulchConfirmationModal() {
}


void UFortCollectionBookPicker::NotifyPanelDeactivated() {
}

void UFortCollectionBookPicker::NotifyPanelActivated() {
}

void UFortCollectionBookPicker::HideMulchConfirmationModal() {
}

UFortAccountItem* UFortCollectionBookPicker::GetCurrentSlottedItem() const {
    return NULL;
}

UFortCollectionBookPicker::UFortCollectionBookPicker() {
    this->MulchConfirmationModalClass = NULL;
    this->CurrentSlottedItem = NULL;
    this->MulchConfirmationModal = NULL;
}

