#include "FortFerretVehicleAnimInstance.h"

UFortFerretVehicleAnimInstance::UFortFerretVehicleAnimInstance() {
    FerretVehicle = NULL;
    bForwardSpeedIsNearlyZero = false;
    bForwardSpeedIsGreaterThanOne = false;
    bReverseSpeedIsGreaterThanOne = false;
    bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    bIsBraking = false;
    bIsBoosting = false;
    bIsBoostReady = false;
    bPlayerHitSpaceBar = false;
    bOnGround = false;
    SteerPitchAngle = 1;
    FerretCardinalDirection = EPlaneDirection::Center;
    ElevatorDeadZone = 1;
    RudderDeadZone = 1;
    bFerretShouldPlayStartTransition = false;
    bFerretShouldPlayStopTransition = false;
    FerretStopCardinalDirection = EPlaneDirection::Center;
    FerretPrePivotCardinalDirection = EPlaneDirection::Center;
    bFerretShouldPlayPivotTransition = false;
    AbsSteerAngle = 1;
}

