#include "FortAnimInput_Zipline.h"

FFortAnimInput_Zipline::FFortAnimInput_Zipline() {
    bIsZiplining = false;
    bShouldPlayPivotTransition = false;
    LeanYaw = 1;
    PivotBlendDelayRemaining = 1;
    PivotBlendDelay = 1;
    PivotCardinalDirection = EFortCardinalDirection::North;
}

