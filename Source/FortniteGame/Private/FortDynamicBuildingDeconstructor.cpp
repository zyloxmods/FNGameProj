#include "FortDynamicBuildingDeconstructor.h"

AFortDynamicBuildingDeconstructor::AFortDynamicBuildingDeconstructor() {
    this->bDebugDrawBounds = false;
    this->bSelectiveDestruction = false;
    this->bIgnoreMissionActors = false;
    this->bShrinkAndDestroyEffect = false;
    this->NumOfPiecesToDestroyAtOnce = 0;
    this->TimeBetweenChunks = 1;
    this->CurrentIndex = 0;
}

