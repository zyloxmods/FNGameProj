#include "FortDynamicBuilder.h"

AFortDynamicBuilder::AFortDynamicBuilder() {
    BuildingInstructions = NULL;
    bSelectiveDestruction = false;
    bDestroyOverlapping = false;
    bDestroyMatchingPiece = false;
    bNoCollisionFail = false;
    bIgnoreMissionActors = false;
    bShrinkAndDestroyEffect = true;
    bDebugDrawBounds = false;
    bUsePlayerBuildAnimations = false;
    BuildingConstructionTime = 1;
    BuildOrder = FDynamicBuildOrder::Z;
    bReverseBuild = false;
    OverrideOwnerPersistentId = 0;
    CurrentIndex = 0;
}

