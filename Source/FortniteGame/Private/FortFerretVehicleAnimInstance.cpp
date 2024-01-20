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
    this->SteerPitchAngle = 0.00f;
    this->FerretCardinalDirection = EPlaneDirection::Up;
    this->ElevatorDeadZone = 0.00f;
    this->RudderDeadZone = 0.00f;
    this->bFerretShouldPlayStartTransition = false;
    this->bFerretShouldPlayStopTransition = false;
    this->FerretStopCardinalDirection = EPlaneDirection::Down;
    this->FerretPrePivotCardinalDirection = EPlaneDirection::Down;
    this->bFerretShouldPlayPivotTransition = false;
    this->AbsSteerAngle = 0.00f;
}

