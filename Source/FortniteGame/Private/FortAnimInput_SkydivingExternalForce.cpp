#include "FortAnimInput_SkydivingExternalForce.h"

FFortAnimInput_SkydivingExternalForce::FFortAnimInput_SkydivingExternalForce() {
    this->bUseSkydivingVectorForce = false;
    this->bUseNoisyClothGravity = false;
    this->bApplyNoiseInActorSpace = false;
    this->PerlinRangedOutMinX = 0.00f;
    this->PerlinRangedOutMaxX = 0.00f;
    this->PerlinRangedOutMinY = 0.00f;
    this->PerlinRangedOutMaxY = 0.00f;
    this->PerlinRangedOutMinZ = 0.00f;
    this->PerlinRangedOutMaxZ = 0.00f;
}

