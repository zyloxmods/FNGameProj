#include "FortDynamicBuildingDeconstructor.h"

AFortDynamicBuildingDeconstructor::AFortDynamicBuildingDeconstructor() {
    this->bDebugDrawBounds = false;
    this->bSelectiveDestruction = false;
    this->bIgnoreMissionActors = false;
    this->bShrinkAndDestroyEffect = false;
    this->NumOfPiecesToDestroyAtOnce = 10;
    this->TimeBetweenChunks = 0.20f;
    this->CurrentIndex = 0;
}

