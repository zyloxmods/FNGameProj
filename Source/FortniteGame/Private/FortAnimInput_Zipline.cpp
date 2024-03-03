#include "FortAnimInput_Zipline.h"

FFortAnimInput_Zipline::FFortAnimInput_Zipline() {
    this->bIsZiplining = false;
    this->bShouldPlayPivotTransition = false;
    this->LeanYaw = 1;
    this->PivotBlendDelayRemaining = 1;
    this->PivotBlendDelay = 1;
    this->PivotCardinalDirection = EFortCardinalDirection::North;
}

