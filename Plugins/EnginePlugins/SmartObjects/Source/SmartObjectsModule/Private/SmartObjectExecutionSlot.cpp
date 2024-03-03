#include "SmartObjectExecutionSlot.h"

FSmartObjectExecutionSlot::FSmartObjectExecutionSlot() {
    this->State = ESmartObjectSlotState::Free;
    this->UserAvatar = NULL;
    this->AssignedBehavior = NULL;
    this->SlotIndex = 0;
}

