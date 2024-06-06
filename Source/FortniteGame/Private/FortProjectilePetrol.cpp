#include "FortProjectilePetrol.h"

AFortProjectilePetrol::AFortProjectilePetrol() {
    FuelAmount = 1;
    PetrolTemplate = NULL;
    FortSplineGroundPathTemplate = NULL;
    bImpacted = false;
    MaxLifeSpanOnCollision = 1;
    GroundSlopeAngleThreshold = 1;
}

