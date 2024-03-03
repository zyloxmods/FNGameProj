#include "FortPlayerAnimInstance_ATVDriver.h"

void UFortPlayerAnimInstance_ATVDriver::AnimNotify_JumpEntered() {
}

UFortPlayerAnimInstance_ATVDriver::UFortPlayerAnimInstance_ATVDriver() {
    this->AbsSteerAngle = 1;
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
    this->JumpPlayRate = 1;
    this->bIsJumpFlipping = false;
    this->bShouldEnableAO = false;
    this->bIsBodyDragging = false;
    this->FallDistanceJumpingThreshold = 1;
    this->FallDistanceJumpTrickThreshold = 1;
    this->RollAngleThreshold = 1;
    this->StartSpeedThreshold = 1;
    this->SlowingSpeedThreshold = 1;
    this->FastSpeedThreshold = 1;
    this->BrakingDeltaThreshold = 1;
    this->SteerHardAngleThreshold = 1;
    this->GroundTraceUpOffset = 1;
    this->GroundTraceLength = 1;
    this->bIsJumpingAndNotRolling = false;
    this->bIsOnGroundAndNotRolling = false;
    this->bIsOnGroundAndBoosting = false;
    this->bPlayPivotOnGroundAndNotBoosting = false;
    this->LandStartPosition = 1;
}

