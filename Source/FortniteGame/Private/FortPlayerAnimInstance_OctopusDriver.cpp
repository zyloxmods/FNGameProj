#include "FortPlayerAnimInstance_OctopusDriver.h"

UFortPlayerAnimInstance_OctopusDriver::UFortPlayerAnimInstance_OctopusDriver() {
    PivotDir = EFortCardinalDirection::North;
    LowerVelocityTime = 1;
    LowerVelocityDuration = 1;
    FwdBwd = 1;
    LeftRight = 1;
    SeatSteerYaw = 1;
    SeatSteerPitch = 1;
    SeatSteerStrength = 1;
    bIsLowerVelocity = false;
    bWasLowerVelocity = false;
    bShouldPlayGrappleFire = false;
    bShouldApplyLeanAdditive = false;
    bShouldPlayPivotTransition = false;
    bHasDriver = false;
    bIsBoosting = false;
    bWantsEastWestPivot = false;
    bWantsNorthSouthPivot = false;
    bIsInAir = false;
    bIsTowhookHolstered = false;
    bIsTowhookExtending = false;
    bIsTowhookAttached = false;
    bEnterMovingInPlace = false;
}

