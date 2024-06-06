#include "FortMeatballVehicleAnimInstance.h"

UFortMeatballVehicleAnimInstance::UFortMeatballVehicleAnimInstance() {
    Meatball = NULL;
    MeatballSpeed = 1;
    SteeringAngle = 1;
    BoostCharge = 1;
    bIsMovingForward = false;
    bIsDrivingFast = false;
    bIsBraking = false;
    bIsBoosting = false;
    bIsBoostReady = false;
    bIsBoostStarting = false;
    bIsBoostEnding = false;
    bIsRocketReady = false;
    bIsRocketOnCoolDown = false;
    bIsSteeringLeft = false;
    bIsSteeringRight = false;
}

