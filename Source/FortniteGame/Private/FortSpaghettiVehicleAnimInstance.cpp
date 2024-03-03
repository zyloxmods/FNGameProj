#include "FortSpaghettiVehicleAnimInstance.h"

UFortSpaghettiVehicleAnimInstance::UFortSpaghettiVehicleAnimInstance() {
    this->SpaghettiVehicle = NULL;
    this->SeatSteerYawDelta = 1;
    this->SeatSteerPitchDelta = 1;
    this->SeatSteerRollDelta = 1;
    this->FwdBwd = 1;
    this->LeftRight = 1;
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

