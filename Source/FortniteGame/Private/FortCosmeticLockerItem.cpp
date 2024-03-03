#include "FortCosmeticLockerItem.h"

bool UFortCosmeticLockerItem::IsValidLockerName(UWorld* ContextWorld, const FString& Candidate) {
    return false;
}

UFortCosmeticLockerItem::UFortCosmeticLockerItem() {
    this->use_count = 0;
}

