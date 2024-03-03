#include "FortMeatballVehicleAnimInstance.h"

UFortMeatballVehicleAnimInstance::UFortMeatballVehicleAnimInstance() {
    this->Meatball = NULL;
    this->MeatballSpeed = 1;
    this->SteeringAngle = 1;
    this->BoostCharge = 1;
    this->bIsMovingForward = false;
    this->bIsDrivingFast = false;
    this->bIsBraking = false;
    this->bIsBoosting = false;
    this->bIsBoostReady = false;
    this->bIsBoostStarting = false;
    this->bIsBoostEnding = false;
    this->bIsRocketReady = false;
    this->bIsRocketOnCoolDown = false;
    this->bIsSteeringLeft = false;
    this->bIsSteeringRight = false;
}

