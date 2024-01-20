#include "FortCollectionBookPicker.h"

void UFortCollectionBookPicker::SlotItemConfirmationComplete(UFortItem* CommittedItem, FFortDialogExternalLatentActionHandle LatentActionHandle) {
}

UFortAccountItem* UFortCollectionBookPicker::GetCurrentSlottedItem() const {
    return NULL;
}

UFortCollectionBookPicker::UFortCollectionBookPicker() {
    this->CurrentSlottedItem = NULL;
}

