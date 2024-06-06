#include "BuildingSMActorClassData.h"

FBuildingSMActorClassData::FBuildingSMActorClassData() {
    ShieldBuffMaterialParamValue1 = 1;
    ShieldBuffMaterialParamValue2 = 1;
    AnimatingDistanceFieldSelfShadowBias = 1;
    AnimatingSubObjects = 1;
    PlayerGridSnapSize = 1;
    NumFrameSubObjects = 0;
    bForceReplicateSubObjects = false;
    bNoPhysicsCollision = false;
    bNoCameraCollision = false;
    bNoPawnCollision = false;
    bNoAIPawnCollision = false;
    bBlocksCeilingPlacement = false;
    bBlocksAttachmentPlacement = false;
    bUsePhysicalSurfaceForFootstep = false;
    bRandomYawOnPlacement = false;
    bRandomScaleOnPlacement = false;
    bClearMIDWhenReturningToUndamagedState = false;
}

