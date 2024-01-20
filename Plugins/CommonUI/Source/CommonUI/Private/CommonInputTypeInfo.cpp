#include "CommonInputTypeInfo.h"

FCommonInputTypeInfo::FCommonInputTypeInfo() {
    this->OverrrideState = EInputActionState::Enabled;
    this->bActionRequiresHold = false;
    this->HoldTime = 0.00f;
}

