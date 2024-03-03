#include "FortPlayerAnimInstance_SpaghettiDriver.h"

UFortPlayerAnimInstance_SpaghettiDriver::UFortPlayerAnimInstance_SpaghettiDriver() {
    this->PivotDir = EFortCardinalDirection::North;
    this->LowerVelocityTime = 1;
    this->LowerVelocityDuration = 1;
    this->FwdBwd = 1;
    this->LeftRight = 1;
    this->SeatSteerYaw = 1;
    this->SeatSteerPitch = 1;
    this->SeatSteerStrength = 1;
    this->bIsLowerVelocity = false;
    this->bWasLowerVelocity = false;
    this->bShouldPlayGrappleFire = false;
    this->bShouldApplyLeanAdditive = false;
    this->bShouldPlayPivotTransition = false;
    this->bHasDriver = false;
    this->bIsBoosting = false;
    this->bWantsEastWestPivot = false;
    this->bWantsNorthSouthPivot = false;
    this->bIsInAir = false;
    this->bIsTowhookHolstered = false;
    this->bIsTowhookExtending = false;
    this->bIsTowhookAttached = false;
    this->bEnterMovingInPlace = false;
}

