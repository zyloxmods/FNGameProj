#include "FortAntelopeVehicleAnimInstance.h"

UFortAntelopeVehicleAnimInstance::UFortAntelopeVehicleAnimInstance() {
    this->AntelopeVehicle = NULL;
    this->VehicleSpeed = 1;
    this->bForwardSpeedIsNearlyZero = false;
    this->bForwardSpeedIsGreaterThanOne = false;
    this->bReverseSpeedIsGreaterThanOne = false;
    this->bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    this->bIsBraking = false;
    this->bIsBoosting = false;
    this->bPlayerHitSpaceBar = false;
    this->ChargingValue = 1;
    this->ChargingMax = 1;
    this->ChargingMin = 1;
    this->ChargingInterpSpeed = 1;
}

