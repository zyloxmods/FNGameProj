#include "FortVehicleOccupantAnimInstance.h"

UFortVehicleOccupantAnimInstance::UFortVehicleOccupantAnimInstance() {
    this->VehicleAnimSet = NULL;
    this->Speed = 1;
    this->DesiredSpeed = 1;
    this->SlopePitchDegreeAngle = 1;
    this->SlopeRollDegreeAngle = 1;
    this->SteeringAngle = 1;
    this->DriveStartPlayRate = 1;
    this->AimYawSmoothed = 1;
    this->AimYawLastFrame = 1;
    this->ReversingSpeedThreshold = 1;
    this->BrakingDeltaThreshold = 1;
    this->MovingThreshold = 1;
    this->MovingForwardThreshold = 1;
    this->MovingFastThreshold = 1;
    this->SteeringLeftThreshold = 1;
    this->SteeringRightThreshold = 1;
    this->StartAimYawLerpingDeltaThreshold = 1;
    this->StopAimYawLerpingDeltaThreshold = 1;
    this->AimYawSmoothSpeed = 1;
    this->PawnToVehicleDeltaYawAngleDegrees = 1;
    this->AimCardDirDeadZoneAngleDegrees = 1;
    this->AimCardDirAngleOffsetDegrees = 1;
    this->AimFWDDeltaAngleDegrees = 1;
    this->AimBWDDeltaAngleDegrees = 1;
    this->AimLFTDeltaAngleDegrees = 1;
    this->AimRGTDeltaAngleDegrees = 1;
    this->LastCardDirIndex = 0;
    this->bIsFemale = false;
    this->bIsDriver = false;
    this->bIsFrontPassenger = false;
    this->bIsBackLeftPassenger = false;
    this->bIsBackRightPassenger = false;
    this->bIsBoosting = false;
    this->bIsReversing = false;
    this->bIsBraking = false;
    this->bIsMoving = false;
    this->bIsMovingForward = false;
    this->bIsMovingFast = false;
    this->bIsSteeringRight = false;
    this->bIsSteeringLeft = false;
    this->bIsSmoothingAimYaw = false;
    this->bAimFWD = false;
    this->bAimBWD = false;
    this->bAimLFT = false;
    this->bAimRGT = false;
}

