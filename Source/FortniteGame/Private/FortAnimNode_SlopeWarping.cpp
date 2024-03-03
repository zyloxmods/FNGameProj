#include "FortAnimNode_SlopeWarping.h"

FFortAnimNode_SlopeWarping::FFortAnimNode_SlopeWarping() {
    this->CachedDeltaTime = 1;
    this->MaxStepHeight = 1;
    this->bKeepMeshInsideOfCapsule = false;
    this->bPullPelvisDown = false;
    this->bUseCustomFloorOffset = false;
    this->bUseCapsuleInfoInsteadOfFootTraces = false;
    this->bWasOnGround = false;
    this->bShowDebug = false;
    this->bFloorSmoothingInitialized = false;
}

