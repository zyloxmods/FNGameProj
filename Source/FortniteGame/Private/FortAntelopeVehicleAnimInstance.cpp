#include "FortAntelopeVehicleAnimInstance.h"

UFortAntelopeVehicleAnimInstance::UFortAntelopeVehicleAnimInstance() {
    this->AntelopeVehicle = NULL;
    this->VehicleSpeed = 0.00f;
    this->bForwardSpeedIsNearlyZero = false;
    this->bForwardSpeedIsGreaterThanOne = false;
    this->bReverseSpeedIsGreaterThanOne = false;
    this->bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    this->bIsBraking = false;
    this->bIsBoosting = false;
    this->bPlayerHitSpaceBar = false;
    this->ChargingValue = 0.00f;
    this->ChargingMax = 0.70f;
    this->ChargingMin = 0.20f;
    this->ChargingInterpSpeed = 5.00f;
}

