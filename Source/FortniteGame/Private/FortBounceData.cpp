#include "FortBounceData.h"

FFortBounceData::FFortBounceData() {
    this->StartTime = 0.00f;
    this->BounceValue = 0.00f;
    this->Radius = 0.00f;
    this->BounceType = EFortBounceType::Hit;
    this->bLocalInstigator = false;
}

