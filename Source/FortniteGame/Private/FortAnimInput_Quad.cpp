#include "FortAnimInput_Quad.h"

FFortAnimInput_Quad::FFortAnimInput_Quad() {
    bIsUsingQuad = false;
    bIsDriver = false;
    bIsFrontPassenger = false;
    bIsBackPassenger = false;
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
    bIsSteeringRight = false;
    bIsSteeringLeft = false;
    RunForwardAlpha = 1;
    BounceCompression = 1;
    LeanPositionX = 1;
    LeanPositionY = 1;
    LeanPositionZ = 1;
    VerticalVelocity = 1;
    VerticalAcceleration = 1;
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
    SteerAlpha = 1;
    SteerAngleDeadZoneDegrees = 1;
    SteeringRotation = 1;
    VehiclePitch = 1;
    VehicleRoll = 1;
}

