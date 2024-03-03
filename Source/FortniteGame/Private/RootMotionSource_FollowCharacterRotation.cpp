#include "RootMotionSource_FollowCharacterRotation.h"

FRootMotionSource_FollowCharacterRotation::FRootMotionSource_FollowCharacterRotation() {
    this->ConstantStrength = 1;
    this->bWasWalkingLastFrame = false;
    this->bWasFallingLastFrame = false;
    this->WalkingAccumulatedTime = 1;
    this->FallingAccumulatedTime = 1;
}

