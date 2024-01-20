#include "FortPlayerAnimInstance_ATVDriver.h"

void UFortPlayerAnimInstance_ATVDriver::AnimNotify_JumpEntered() {
}

UFortPlayerAnimInstance_ATVDriver::UFortPlayerAnimInstance_ATVDriver() {
    this->AbsSteerAngle = 0.00f;
    this->bInAir = false;
    this->bIsInRollAngleThreshold = false;
    this->bIsDriveStarting = false;
    this->bIsSteeringRotating = false;
    this->bIsStopped = false;
    this->bIsSlowingDown = false;
    this->bIsDrivingFast = false;
    this->bIsTurningRightHard = false;
    this->bIsTurningLeftHard = false;
    this->bIsBraking = false;
    this->bIsBoosting = false;
    this->bIsJumpTrick = false;
    this->JumpPlayRate = 0.00f;
    this->bIsJumpFlipping = false;
    this->bShouldEnableAO = false;
    this->bIsBodyDragging = false;
    this->FallDistanceJumpingThreshold = 95.00f;
    this->FallDistanceJumpTrickThreshold = 145.00f;
    this->RollAngleThreshold = 60.00f;
    this->StartSpeedThreshold = 400.00f;
    this->SlowingSpeedThreshold = 200.00f;
    this->FastSpeedThreshold = 10.00f;
    this->BrakingDeltaThreshold = 20.00f;
    this->SteerHardAngleThreshold = 34.00f;
    this->GroundTraceUpOffset = 10.00f;
    this->GroundTraceLength = 200.00f;
    this->bIsJumpingAndNotRolling = false;
    this->bIsOnGroundAndNotRolling = false;
    this->bIsOnGroundAndBoosting = false;
    this->bPlayPivotOnGroundAndNotBoosting = false;
    this->LandStartPosition = 0.00f;
}

