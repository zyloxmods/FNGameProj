#include "FortProjectilePetrol.h"

AFortProjectilePetrol::AFortProjectilePetrol() {
    this->FuelAmount = 1;
    this->PetrolTemplate = NULL;
    this->FortSplineGroundPathTemplate = NULL;
    this->bImpacted = false;
    this->MaxLifeSpanOnCollision = 1;
    this->GroundSlopeAngleThreshold = 1;
}

