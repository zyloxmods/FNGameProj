#include "FortAntelopeVehicleAnimInstance.h"

UFortAntelopeVehicleAnimInstance::UFortAntelopeVehicleAnimInstance() {
    AntelopeVehicle = NULL;
    VehicleSpeed = 1;
    bForwardSpeedIsNearlyZero = false;
    bForwardSpeedIsGreaterThanOne = false;
    bReverseSpeedIsGreaterThanOne = false;
    bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    bIsBraking = false;
    bIsBoosting = false;
    bPlayerHitSpaceBar = false;
    ChargingValue = 1;
    ChargingMax = 1;
    ChargingMin = 1;
    ChargingInterpSpeed = 1;
}

