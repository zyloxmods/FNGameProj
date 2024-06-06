#include "FortOctopusVehicleAnimInstance.h"

UFortOctopusVehicleAnimInstance::UFortOctopusVehicleAnimInstance() {
    OctopusVehicle = NULL;
    SeatSteerYawDelta = 1;
    SeatSteerPitchDelta = 1;
    SeatSteerRollDelta = 1;
    FwdBwd = 1;
    LeftRight = 1;
    PivotDir = EFortCardinalDirection::North;
    bIsBoosting = false;
    bIsTowhookExtending = false;
    bIsTowhookAttached = false;
    bIsTowhookContracting = false;
    bIsTowhookHolstered = true;
    bIsLowerVelocity = false;
    bIsDriverFemale = false;
    bShouldPlayPivotTransition = false;
    bShouldPlayGrappleFire = false;
}

