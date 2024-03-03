#include "MtxPurchaseHistoryEntry.h"

FMtxPurchaseHistoryEntry::FMtxPurchaseHistoryEntry() {
    this->FreeRefundEligible = false;
    this->bHasBeenRefunded = false;
    this->TotalMtxPaid = 0;
}

