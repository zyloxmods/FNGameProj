#include "BuildingSMActorClassData.h"

FBuildingSMActorClassData::FBuildingSMActorClassData() {
    this->ShieldBuffMaterialParamValue1 = 1;
    this->ShieldBuffMaterialParamValue2 = 1;
    this->AnimatingDistanceFieldSelfShadowBias = 1;
    this->AnimatingSubObjects = 1;
    this->PlayerGridSnapSize = 1;
    this->NumFrameSubObjects = 0;
    this->bForceReplicateSubObjects = false;
    this->bNoPhysicsCollision = false;
    this->bNoCameraCollision = false;
    this->bNoPawnCollision = false;
    this->bNoAIPawnCollision = false;
    this->bBlocksCeilingPlacement = false;
    this->bBlocksAttachmentPlacement = false;
    this->bUsePhysicalSurfaceForFootstep = false;
    this->bRandomYawOnPlacement = false;
    this->bRandomScaleOnPlacement = false;
    this->bClearMIDWhenReturningToUndamagedState = false;
}

