#include "FortAnimInput_SkydivingExternalForce.h"

FFortAnimInput_SkydivingExternalForce::FFortAnimInput_SkydivingExternalForce() {
    bUseSkydivingVectorForce = false;
    bUseNoisyClothGravity = false;
    bApplyNoiseInActorSpace = false;
    PerlinRangedOutMinX = 1;
    PerlinRangedOutMaxX = 1;
    PerlinRangedOutMinY = 1;
    PerlinRangedOutMaxY = 1;
    PerlinRangedOutMinZ = 1;
    PerlinRangedOutMaxZ = 1;
}

