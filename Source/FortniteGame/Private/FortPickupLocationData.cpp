#include "FortPickupLocationData.h"

FFortPickupLocationData::FFortPickupLocationData() {
    this->PickupTarget = NULL;
    this->CombineTarget = NULL;
    this->ItemOwner = NULL;
    this->FlyTime = 1;
    this->TossState = EFortPickupTossState::NotTossed;
    this->bPlayPickupSound = false;
}

