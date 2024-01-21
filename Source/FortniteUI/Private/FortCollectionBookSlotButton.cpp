#include "FortCollectionBookSlotButton.h"

void UFortCollectionBookSlotButton::PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection) {
}

void UFortCollectionBookSlotButton::OnSlottedItemUpdated() {
}

UWidget* UFortCollectionBookSlotButton::GetPopupMenu() {
    return NULL;
}

UFortCollectionBookSlotButton::UFortCollectionBookSlotButton() {
    this->CollectionBookSlotWidget = NULL;
    this->PopupMenuAnchor = NULL;
}

