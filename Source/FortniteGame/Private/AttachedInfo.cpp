#include "AttachedInfo.h"

FAttachedInfo::FAttachedInfo() {
    this->AttachedToActor = NULL;
    this->NarrowPlacementAgainstVelocityThreshold = 0.00f;
    this->StickyOffsetFromPhysicsMesh = 0.00f;
    this->StickyOffsetFromBoneCenter = 0.00f;
}

