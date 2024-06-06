#include "FortAnimInput_FerretVehicle.h"

FFortAnimInput_FerretVehicle::FFortAnimInput_FerretVehicle() {
    bIsUsingFerretVehicle = false;
    bIsDriver = false;
    bIsFrontPassenger = false;
    bIsBackLeftPassenger = false;
    bIsBackRightPassenger = false;
    bIsFrontPassengerAndLeaning = false;
    bIsBackPassengerAndLeaning = false;
    bIsDrifting = false;
    bIsBoosting = false;
    bIsReversing = false;
    bIsBraking = false;
    bIsMoving = false;
    bIsMovingForward = false;
    bIsLeaning = false;
    bIsLeaningOrBouncing = false;
    bIsBounceCrouching = false;
    bIsBounceCrouched = false;
    bIsBounceJumping = false;
    bIsBounceRecoiling = false;
    bIsSteeringRight = 0;
    bIsSteeringLeft = 0;
    bIsShooting = 0;
    bIsFerretPassengerRotating = 0;
    RunForwardAlpha = 1;
    BounceCompression = 1;
    LeanPositionX = 1;
    LeanPositionY = 1;
    LeanPositionZ = 1;
    bAimFWD = false;
    bAimBWD = false;
    bAimLFT = false;
    bAimRGT = false;
    PawnToVehicleDeltaYawAngleDegrees = 1;
    AimCardDirDeadZoneAngleDegrees = 1;
    AimCardDirAngleOffsetDegrees = 1;
    LastCardDirIndex = 0;
    AimFWDDeltaAngleDegrees = 1;
    AimBWDDeltaAngleDegrees = 1;
    AimLFTDeltaAngleDegrees = 1;
    AimRGTDeltaAngleDegrees = 1;
    SlopePitchDegreeAngle = 1;
    SlopeRollDegreeAngle = 1;
    SteerAngle = 1;
}

