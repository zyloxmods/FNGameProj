#include "FortPlayerAnimInstance_FerretDriver.h"

void UFortPlayerAnimInstance_FerretDriver::AnimNotify_JumpEntered() {
}

UFortPlayerAnimInstance_FerretDriver::UFortPlayerAnimInstance_FerretDriver() {
    AbsSteerAngle = 1;
    bInAir = false;
    bOnGround = false;
    bIsInRollAngleThreshold = false;
    bIsDriveStarting = false;
    bIsSteeringRotating = false;
    bIsStopped = false;
    bIsSlowingDown = false;
    bIsDrivingFast = false;
    bIsTurningRightHard = false;
    bIsTurningLeftHard = false;
    bIsBraking = false;
    bIsBoosting = false;
    bIsJumpTrick = false;
    JumpPlayRate = 1;
    bIsJumpFlipping = false;
    bShouldEnableAO = false;
    bIsBodyDragging = false;
    FallDistanceJumpingThreshold = 1;
    FallDistanceJumpTrickThreshold = 1;
    RollAngleThreshold = 1;
    StartSpeedThreshold = 1;
    SlowingSpeedThreshold = 1;
    FastSpeedThreshold = 1;
    BrakingDeltaThreshold = 1;
    SteerHardAngleThreshold = 1;
    GroundTraceUpOffset = 1;
    GroundTraceLength = 1;
    bIsJumpingAndNotRolling = false;
    bIsOnGroundAndNotRolling = false;
    bIsOnGroundAndBoosting = false;
    bPlayPivotOnGroundAndNotBoosting = false;
    LandStartPosition = 1;
    DriverAimPitch = 1;
    DriverAimYaw = 1;
    FerretCardinalDirection = EPlaneDirection::Center;
    ElevatorDeadZone = 1;
    RudderDeadZone = 1;
    bFerretShouldPlayStartTransition = false;
    bFerretShouldPlayStopTransition = false;
    FerretStopCardinalDirection = EPlaneDirection::Center;
    FerretPrePivotCardinalDirection = EPlaneDirection::Center;
    bFerretShouldPlayPivotTransition = false;
    bIsFerretRotating = false;
    bIsFerretShooting = false;
    ElevatorRotation = 1;
    bIsRollingRight = false;
    bIsRollingLeft = false;
}

