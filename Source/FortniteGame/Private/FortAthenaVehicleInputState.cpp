#include "FortAthenaVehicleInputState.h"

FFortAthenaVehicleInputState::FFortAthenaVehicleInputState() {
    this->ForwardAlpha = 1;
    this->RightAlpha = 1;
    this->PitchAlpha = 1;
    this->LookUpDelta = 1;
    this->TurnDelta = 1;
    this->SteerAlpha = 1;
    this->GravityOffset = 1;
    this->bIsSprinting = false;
    this->bIsJumping = false;
    this->bIsBraking = false;
    this->bIsHonking = false;
    this->bIgnoreForwardInAir = false;
    this->bMovementModifier0 = false;
    this->bMovementModifier1 = false;
    this->bMovementModifier2 = false;
}

