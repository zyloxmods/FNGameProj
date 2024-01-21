#include "FortOctopusVehicleAnimInstance.h"

UFortOctopusVehicleAnimInstance::UFortOctopusVehicleAnimInstance() {
    this->OctopusVehicle = NULL;
    this->SeatSteerYawDelta = 0.00f;
    this->SeatSteerPitchDelta = 0.00f;
    this->SeatSteerRollDelta = 0.00f;
    this->FwdBwd = 0.00f;
    this->LeftRight = 0.00f;
    this->PivotDir = EFortCardinalDirection::North;
    this->bIsBoosting = false;
    this->bIsTowhookExtending = false;
    this->bIsTowhookAttached = false;
    this->bIsTowhookContracting = false;
    this->bIsTowhookHolstered = true;
    this->bIsLowerVelocity = false;
    this->bIsDriverFemale = false;
    this->bShouldPlayPivotTransition = false;
    this->bShouldPlayGrappleFire = false;
}

