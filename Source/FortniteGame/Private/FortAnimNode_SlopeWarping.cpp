#include "FortAnimNode_SlopeWarping.h"

FFortAnimNode_SlopeWarping::FFortAnimNode_SlopeWarping() {
    this->CachedDeltaTime = 0.00f;
    this->MaxStepHeight = 0.00f;
    this->bKeepMeshInsideOfCapsule = false;
    this->bPullPelvisDown = false;
    this->bUseCustomFloorOffset = false;
    this->bUseCapsuleInfoInsteadOfFootTraces = false;
    this->bWasOnGround = false;
    this->bShowDebug = false;
    this->bFloorSmoothingInitialized = false;
}

