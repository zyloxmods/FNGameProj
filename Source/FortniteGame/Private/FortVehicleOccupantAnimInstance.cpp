#include "FortVehicleOccupantAnimInstance.h"

UFortVehicleOccupantAnimInstance::UFortVehicleOccupantAnimInstance() {
    VehicleAnimSet = NULL;
    Speed = 1;
    DesiredSpeed = 1;
    SlopePitchDegreeAngle = 1;
    SlopeRollDegreeAngle = 1;
    SteeringAngle = 1;
    DriveStartPlayRate = 1;
    AimYawSmoothed = 1;
    AimYawLastFrame = 1;
    ReversingSpeedThreshold = 1;
    BrakingDeltaThreshold = 1;
    MovingThreshold = 1;
    MovingForwardThreshold = 1;
    MovingFastThreshold = 1;
    SteeringLeftThreshold = 1;
    SteeringRightThreshold = 1;
    StartAimYawLerpingDeltaThreshold = 1;
    StopAimYawLerpingDeltaThreshold = 1;
    AimYawSmoothSpeed = 1;
    PawnToVehicleDeltaYawAngleDegrees = 1;
    AimCardDirDeadZoneAngleDegrees = 1;
    AimCardDirAngleOffsetDegrees = 1;
    AimFWDDeltaAngleDegrees = 1;
    AimBWDDeltaAngleDegrees = 1;
    AimLFTDeltaAngleDegrees = 1;
    AimRGTDeltaAngleDegrees = 1;
    LastCardDirIndex = 0;
    bIsFemale = false;
    bIsDriver = false;
    bIsFrontPassenger = false;
    bIsBackLeftPassenger = false;
    bIsBackRightPassenger = false;
    bIsBoosting = false;
    bIsReversing = false;
    bIsBraking = false;
    bIsMoving = false;
    bIsMovingForward = false;
    bIsMovingFast = false;
    bIsSteeringRight = false;
    bIsSteeringLeft = false;
    bIsSmoothingAimYaw = false;
    bAimFWD = false;
    bAimBWD = false;
    bAimLFT = false;
    bAimRGT = false;
}

