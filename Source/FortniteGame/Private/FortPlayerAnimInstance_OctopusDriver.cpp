#include "FortPlayerAnimInstance_OctopusDriver.h"

UFortPlayerAnimInstance_OctopusDriver::UFortPlayerAnimInstance_OctopusDriver() {
    this->PivotDir = EFortCardinalDirection::North;
    this->LowerVelocityTime = 0.00f;
    this->LowerVelocityDuration = 0.00f;
    this->FwdBwd = 0.00f;
    this->LeftRight = 0.00f;
    this->SeatSteerYaw = 0.00f;
    this->SeatSteerPitch = 0.00f;
    this->SeatSteerStrength = 0.00f;
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

