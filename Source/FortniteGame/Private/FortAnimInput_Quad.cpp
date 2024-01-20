#include "FortAnimInput_Quad.h"

FFortAnimInput_Quad::FFortAnimInput_Quad() {
    this->bIsUsingQuad = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackPassenger = false;
    this->bIsBackPassengerAndLeaning = false;
    this->bIsDrifting = false;
    this->bIsBoosting = false;
    this->bIsReversing = false;
    this->bIsBraking = false;
    this->bIsMoving = false;
    this->bIsMovingForward = false;
    this->bIsLeaning = false;
    this->bIsLeaningOrBouncing = false;
    this->bIsBounceCrouching = false;
    this->bIsBounceCrouched = false;
    this->bIsBounceJumping = false;
    this->bIsBounceRecoiling = false;
    this->bIsSteeringRight = false;
    this->bIsSteeringLeft = false;
    this->RunForwardAlpha = 0.00f;
    this->BounceCompression = 0.00f;
    this->LeanPositionX = 0.00f;
    this->LeanPositionY = 0.00f;
    this->LeanPositionZ = 0.00f;
    this->VerticalVelocity = 0.00f;
    this->VerticalAcceleration = 0.00f;
    this->bAimFWD = false;
    this->bAimBWD = false;
    this->bAimLFT = false;
    this->bAimRGT = false;
    this->PawnToVehicleDeltaYawAngleDegrees = 0.00f;
    this->AimCardDirDeadZoneAngleDegrees = 0.00f;
    this->AimCardDirAngleOffsetDegrees = 0.00f;
    this->LastCardDirIndex = 0;
    this->AimFWDDeltaAngleDegrees = 0.00f;
    this->AimBWDDeltaAngleDegrees = 0.00f;
    this->AimLFTDeltaAngleDegrees = 0.00f;
    this->AimRGTDeltaAngleDegrees = 0.00f;
    this->SlopePitchDegreeAngle = 0.00f;
    this->SlopeRollDegreeAngle = 0.00f;
    this->SteerAngle = 0.00f;
    this->SteerAlpha = 0.00f;
    this->SteerAngleDeadZoneDegrees = 0.00f;
    this->SteeringRotation = 0.00f;
    this->VehiclePitch = 0.00f;
    this->VehicleRoll = 0.00f;
}

