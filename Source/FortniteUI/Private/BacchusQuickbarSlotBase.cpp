#include "BacchusQuickbarSlotBase.h"

void UBacchusQuickbarSlotBase::StopUseSlot(int32 PointerIndex) {
}


void UBacchusQuickbarSlotBase::SlotSelected(int32 PointerIndex, bool bStopUseImmediately) {
}


UBacchusQuickbarSlotBase::UBacchusQuickbarSlotBase() {
    this->bHasOngoingUseAction = false;
    this->bTapToLockEnabled = false;
    this->bIsLocked = false;
    this->bSupportsDragAndDrop = false;
    this->bDragDetected = false;
    this->bDragOpStarted = false;
    this->bInteractionStarted = false;
    this->SelectionHighlight = NULL;
    this->LockIcon = NULL;
}

