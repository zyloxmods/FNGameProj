#include "FortGoatVehicleAnimInstance.h"

UFortGoatVehicleAnimInstance::UFortGoatVehicleAnimInstance() {
    GolfCart = NULL;
    GolfCartSpeed = 1;
    bForwardSpeedIsNearlyZero = false;
    bForwardSpeedIsGreaterThanOne = false;
    bReverseSpeedIsGreaterThanOne = false;
    bSpeedIsGreaterThanFiveAndPlayerHitSpace = false;
    bIsBraking = false;
    bIsEBraking = false;
    bIsBoosting = false;
    bIsPowerSliding = false;
    bPlayerHitSpaceBar = false;
}

