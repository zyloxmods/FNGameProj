#include "QuickBarSlot.h"

FQuickBarSlot::FQuickBarSlot() {
    this->bEnabled = false;
    this->bIsDirty = false;
    this->bIsReserved = false;
    this->bIsOccupied = false;
    this->UsedBySlotIndex = 0;
}

