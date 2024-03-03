#include "AthenaInventoryEquipButtonBase.h"

UAthenaInventoryEquipButtonBase::UAthenaInventoryEquipButtonBase() {
    this->ItemWidget = NULL;
    this->EmptyImage = NULL;
    this->SlotIndex = 0;
    this->ButtonSizeBySlotUsage.AddDefaulted(5);
}

