#include "AlterationSlot.h"

FAlterationSlot::FAlterationSlot() {
    UnlockLevel = 0;
    UnlockRarity = EFortRarity::Common;
    bRespeccable = false;
    SlotInitMin = EFortRarity::Common;
    SlotInitMax = EFortRarity::Common;
    SlotInitIndex = 0;
}

