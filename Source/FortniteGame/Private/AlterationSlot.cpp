#include "AlterationSlot.h"

FAlterationSlot::FAlterationSlot() {
    this->UnlockLevel = 0;
    this->UnlockRarity = EFortRarity::Common;
    this->bRespeccable = false;
    this->SlotInitMin = EFortRarity::Common;
    this->SlotInitMax = EFortRarity::Common;
    this->SlotInitIndex = 0;
}

