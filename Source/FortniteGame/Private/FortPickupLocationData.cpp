#include "FortPickupLocationData.h"

FFortPickupLocationData::FFortPickupLocationData() {
    PickupTarget = NULL;
    CombineTarget = NULL;
    ItemOwner = NULL;
    FlyTime = 1;
    TossState = EFortPickupTossState::NotTossed;
    bPlayPickupSound = false;
}

