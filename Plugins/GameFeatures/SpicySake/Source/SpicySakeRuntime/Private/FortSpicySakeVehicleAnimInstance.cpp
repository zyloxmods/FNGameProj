#include "FortSpicySakeVehicleAnimInstance.h"

UFortSpicySakeVehicleAnimInstance::UFortSpicySakeVehicleAnimInstance() {
    this->LocalVelocityYawAngle = 1;
    this->ForwardSpeed = 1;
    this->UpSpeed = 1;
    this->SmoothJumpPitch = 1;
    this->SmoothJumpPitchDeltaRate = 1;
    this->CurrentBoostRateScale = 1;
    this->bIsJumping = false;
    this->bIsSurfaceSwimming = false;
    this->bIsOnGround = false;
    this->bIsFalling = false;
    this->bIsCharging = false;
    this->bOnGroundNotMoving = false;
    this->bLanded = false;
    this->bIsBoosting = false;
    this->bStartBoosting = false;
    this->bTransition_Idle_To_Boost = false;
    this->bTransition_Boost_To_Idle = false;
}

