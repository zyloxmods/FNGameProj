#include "FortDynamicBuilder.h"

AFortDynamicBuilder::AFortDynamicBuilder() {
    this->BuildingInstructions = NULL;
    this->bSelectiveDestruction = false;
    this->bDestroyOverlapping = false;
    this->bDestroyMatchingPiece = false;
    this->bNoCollisionFail = false;
    this->bIgnoreMissionActors = false;
    this->bShrinkAndDestroyEffect = true;
    this->bDebugDrawBounds = false;
    this->bUsePlayerBuildAnimations = false;
    this->BuildingConstructionTime = 0.00f;
    this->BuildOrder = FDynamicBuildOrder::Z;
    this->bReverseBuild = false;
    this->OverrideOwnerPersistentId = -1;
    this->CurrentIndex = 0;
}

