#include "FortFerretVehicleAnimInstance.h"

UFortFerretVehicleAnimInstance::UFortFerretVehicleAnimInstance() {
    this->FerretVehicle = NULL;
    this->bForwardSpeedIsNearlyZero = false;
    this->bForwardSpeedIsGreaterThanOne = false;
    this->bReverseSpeedIsGreaterThanOne = false;
    this->bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    this->bIsBraking = false;
    this->bIsBoosting = false;
    this->bIsBoostReady = false;
    this->bPlayerHitSpaceBar = false;
    this->bOnGround = false;
    this->SteerPitchAngle = 1;
    this->FerretCardinalDirection = EPlaneDirection::Center;
    this->ElevatorDeadZone = 1;
    this->RudderDeadZone = 1;
    this->bFerretShouldPlayStartTransition = false;
    this->bFerretShouldPlayStopTransition = false;
    this->FerretStopCardinalDirection = EPlaneDirection::Center;
    this->FerretPrePivotCardinalDirection = EPlaneDirection::Center;
    this->bFerretShouldPlayPivotTransition = false;
    this->AbsSteerAngle = 1;
}

