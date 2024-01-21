#include "FortPickupLocationData.h"

FFortPickupLocationData::FFortPickupLocationData() {
    this->PickupTarget = NULL;
    this->CombineTarget = NULL;
    this->ItemOwner = NULL;
    this->FlyTime = 0.00f;
    this->TossState = EFortPickupTossState::NotTossed;
    this->bPlayPickupSound = false;
}

