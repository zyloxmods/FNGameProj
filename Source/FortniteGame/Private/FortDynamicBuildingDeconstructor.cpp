#include "FortDynamicBuildingDeconstructor.h"

AFortDynamicBuildingDeconstructor::AFortDynamicBuildingDeconstructor() {
    bDebugDrawBounds = false;
    bSelectiveDestruction = false;
    bIgnoreMissionActors = false;
    bShrinkAndDestroyEffect = false;
    NumOfPiecesToDestroyAtOnce = 0;
    TimeBetweenChunks = 1;
    CurrentIndex = 0;
}

