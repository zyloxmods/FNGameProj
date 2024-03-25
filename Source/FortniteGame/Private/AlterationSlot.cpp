#include "AlterationSlot.h"

FAlterationSlot::FAlterationSlot() {
    this->UnlockLevel = 0;
    this->UnlockRarity = EFortRarity::Handmade;
    this->bRespeccable = false;
    this->SlotInitMin = EFortRarity::Handmade;
    this->SlotInitMax = EFortRarity::Handmade;
    this->SlotInitIndex = 0;
}

