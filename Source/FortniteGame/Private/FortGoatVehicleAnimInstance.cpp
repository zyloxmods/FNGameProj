#include "FortGoatVehicleAnimInstance.h"

UFortGoatVehicleAnimInstance::UFortGoatVehicleAnimInstance() {
    this->GolfCart = NULL;
    this->GolfCartSpeed = 0.00f;
    this->bForwardSpeedIsNearlyZero = false;
    this->bForwardSpeedIsGreaterThanOne = false;
    this->bReverseSpeedIsGreaterThanOne = false;
    this->bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    this->bIsBraking = false;
    this->bIsEBraking = false;
    this->bIsBoosting = false;
    this->bIsPowerSliding = false;
    this->bPlayerHitSpaceBar = false;
}

