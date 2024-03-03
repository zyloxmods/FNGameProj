#include "FortHoagieVehicleAnimInstance.h"

UFortHoagieVehicleAnimInstance::UFortHoagieVehicleAnimInstance() {
    this->BoostCardinalDirection = EFortCardinalDirection::North;
    this->EngineRotationInterpSpeed = 1;
    this->EngineRotationDuringBoostInterpSpeed = 1;
    this->EngineFlipSpeedThreshold = 1;
    this->BoostDirectionDeadzone = 1;
    this->EngineFlipDeadzone = 1;
    this->DriverRoll = 1;
    this->DriverYaw = 1;
    this->VerticalSpeed = 1;
    this->FwdSpeed = 1;
    this->LocalBoostDirection = 1;
    this->YawBlendSpaceInput = 1;
    this->NormalizedAcceleration = 1;
    this->bShouldHideBlades = false;
    this->bIsBoostOnCD = false;
    this->bIsBoostReady = false;
    this->bIsMovingForward = false;
    this->bIsReversing = false;
    this->bIsMovingAnyDirection = false;
    this->bIsBoosting = false;
    this->bShouldReverse = false;
    this->bShouldGoBackToIdle = false;
    this->bShouldApplyBoostAdditive = false;
    this->bIsEngineShuttingOff = false;
    this->bTransition_Default_ReverseStart = false;
    this->bTransition_BoostLoop_Reverse = false;
}

