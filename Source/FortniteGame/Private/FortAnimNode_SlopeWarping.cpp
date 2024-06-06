#include "FortAnimNode_SlopeWarping.h"

FFortAnimNode_SlopeWarping::FFortAnimNode_SlopeWarping() {
    CachedDeltaTime = 1;
    MaxStepHeight = 1;
    bKeepMeshInsideOfCapsule = false;
    bPullPelvisDown = false;
    bUseCustomFloorOffset = false;
    bUseCapsuleInfoInsteadOfFootTraces = false;
    bWasOnGround = false;
    bShowDebug = false;
    bFloorSmoothingInitialized = false;
}

