#include "FortAnimInput_GolfCart.h"

FFortAnimInput_GolfCart::FFortAnimInput_GolfCart() {
    bIsUsingGolfCart = false;
    bIsDriver = false;
    bIsFrontPassenger = false;
    bIsBackLeftPassenger = false;
    bIsBackRightPassenger = false;
    bIsFrontPassengerAndLeaning = false;
    bIsBackPassengerAndLeaning = false;
    bIsDrifting = false;
    bIsBoosting = false;
    bIsEBraking = false;
    bIsReversing = false;
    bIsBraking = false;
    bIsMoving = false;
    bIsMovingForward = false;
    bIsPowerSliding = false;
    bIsLeaning = false;
    bIsLeaningOrBouncing = false;
    bIsBounceCrouching = false;
    bIsBounceCrouched = false;
    bIsBounceJumping = false;
    bIsBounceRecoiling = false;
    bIsSteeringRight = false;
    bIsSteeringLeft = false;
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

