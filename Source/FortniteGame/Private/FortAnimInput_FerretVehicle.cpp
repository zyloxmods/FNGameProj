#include "FortAnimInput_FerretVehicle.h"

FFortAnimInput_FerretVehicle::FFortAnimInput_FerretVehicle() {
    this->bIsUsingFerretVehicle = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackLeftPassenger = false;
    this->bIsBackRightPassenger = false;
    this->bIsFrontPassengerAndLeaning = false;
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
    this->bIsSteeringRight = 0;
    this->bIsSteeringLeft = 0;
    this->bIsShooting = 0;
    this->bIsFerretPassengerRotating = 0;
    this->RunForwardAlpha = 1;
    this->BounceCompression = 1;
    this->LeanPositionX = 1;
    this->LeanPositionY = 1;
    this->LeanPositionZ = 1;
    this->bAimFWD = false;
    this->bAimBWD = false;
    this->bAimLFT = false;
    this->bAimRGT = false;
    this->PawnToVehicleDeltaYawAngleDegrees = 1;
    this->AimCardDirDeadZoneAngleDegrees = 1;
    this->AimCardDirAngleOffsetDegrees = 1;
    this->LastCardDirIndex = 0;
    this->AimFWDDeltaAngleDegrees = 1;
    this->AimBWDDeltaAngleDegrees = 1;
    this->AimLFTDeltaAngleDegrees = 1;
    this->AimRGTDeltaAngleDegrees = 1;
    this->SlopePitchDegreeAngle = 1;
    this->SlopeRollDegreeAngle = 1;
    this->SteerAngle = 1;
}

