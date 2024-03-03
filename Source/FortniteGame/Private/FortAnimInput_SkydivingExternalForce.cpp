#include "FortAnimInput_SkydivingExternalForce.h"

FFortAnimInput_SkydivingExternalForce::FFortAnimInput_SkydivingExternalForce() {
    this->bUseSkydivingVectorForce = false;
    this->bUseNoisyClothGravity = false;
    this->bApplyNoiseInActorSpace = false;
    this->PerlinRangedOutMinX = 1;
    this->PerlinRangedOutMaxX = 1;
    this->PerlinRangedOutMinY = 1;
    this->PerlinRangedOutMaxY = 1;
    this->PerlinRangedOutMinZ = 1;
    this->PerlinRangedOutMaxZ = 1;
}

