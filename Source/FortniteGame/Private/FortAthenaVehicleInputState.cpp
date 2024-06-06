#include "FortAthenaVehicleInputState.h"

FFortAthenaVehicleInputState::FFortAthenaVehicleInputState() {
    ForwardAlpha = 1;
    RightAlpha = 1;
    PitchAlpha = 1;
    LookUpDelta = 1;
    TurnDelta = 1;
    SteerAlpha = 1;
    GravityOffset = 1;
    bIsSprinting = false;
    bIsJumping = false;
    bIsBraking = false;
    bIsHonking = false;
    bIgnoreForwardInAir = false;
    bMovementModifier0 = false;
    bMovementModifier1 = false;
    bMovementModifier2 = false;
}

