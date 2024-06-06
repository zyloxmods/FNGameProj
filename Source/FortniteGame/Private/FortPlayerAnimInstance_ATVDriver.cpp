#include "FortPlayerAnimInstance_ATVDriver.h"

void UFortPlayerAnimInstance_ATVDriver::AnimNotify_JumpEntered() {
}

UFortPlayerAnimInstance_ATVDriver::UFortPlayerAnimInstance_ATVDriver() {
    AbsSteerAngle = 1;
    bInAir = false;
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
}

