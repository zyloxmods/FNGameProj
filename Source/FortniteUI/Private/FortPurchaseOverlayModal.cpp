#include "FortPurchaseOverlayModal.h"

bool UFortPurchaseOverlayModal::ShouldShowAsRefund() const {
    return false;
}

bool UFortPurchaseOverlayModal::IsLastItem(int32 ItemIndex) const {
    return false;
}


bool UFortPurchaseOverlayModal::HasMultipleItems() const {
    return false;
}

int32 UFortPurchaseOverlayModal::GetQuantityPurchased() const {
    return 0;
}

TArray<FPurchasedItemInfo> UFortPurchaseOverlayModal::GetPurchasedItems() const {
    return TArray<FPurchasedItemInfo>();
}

void UFortPurchaseOverlayModal::Dismiss() {
}

UFortPurchaseOverlayModal::UFortPurchaseOverlayModal() {
    this->HBox_SuccessfullyPurchased = NULL;
    this->HBox_SuccessfullyRefunded = NULL;
}

