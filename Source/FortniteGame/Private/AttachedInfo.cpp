#include "AttachedInfo.h"

FAttachedInfo::FAttachedInfo() {
    this->AttachedToActor = NULL;
    this->NarrowPlacementAgainstVelocityThreshold = 1;
    this->StickyOffsetFromPhysicsMesh = 1;
    this->StickyOffsetFromBoneCenter = 1;
}

