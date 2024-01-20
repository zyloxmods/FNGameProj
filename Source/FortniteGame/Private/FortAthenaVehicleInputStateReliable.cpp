#include "FortAthenaVehicleInputStateReliable.h"

FFortAthenaVehicleInputStateReliable::FFortAthenaVehicleInputStateReliable() {
    this->bIsSprinting = false;
    this->bIsJumping = false;
    this->bIsBraking = false;
    this->bIsHonking = false;
    this->bIgnoreForwardInAir = false;
    this->bMovementModifier0 = false;
    this->bMovementModifier1 = false;
    this->bMovementModifier2 = false;
}

