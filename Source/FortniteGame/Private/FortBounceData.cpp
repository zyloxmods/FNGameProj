#include "FortBounceData.h"

FFortBounceData::FFortBounceData() {
    this->StartTime = 1;
    this->BounceValue = 1;
    this->Radius = 1;
    this->BounceType = EFortBounceType::Hit;
    this->bLocalInstigator = false;
    this->bIsPlaying = false;
}

