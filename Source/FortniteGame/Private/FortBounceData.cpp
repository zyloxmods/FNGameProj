#include "FortBounceData.h"

FFortBounceData::FFortBounceData() {
    StartTime = 1;
    BounceValue = 1;
    Radius = 1;
    BounceType = EFortBounceType::Hit;
    bLocalInstigator = false;
    bIsPlaying = false;
}

