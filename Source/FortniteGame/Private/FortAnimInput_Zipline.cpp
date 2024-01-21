#include "FortAnimInput_Zipline.h"

FFortAnimInput_Zipline::FFortAnimInput_Zipline() {
    this->bIsZiplining = false;
    this->bShouldPlayPivotTransition = false;
    this->LeanYaw = 0.00f;
    this->PivotBlendDelayRemaining = 0.00f;
    this->PivotBlendDelay = 0.00f;
    this->PivotCardinalDirection = EFortCardinalDirection::North;
}

