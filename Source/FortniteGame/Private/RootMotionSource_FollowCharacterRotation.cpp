#include "RootMotionSource_FollowCharacterRotation.h"

FRootMotionSource_FollowCharacterRotation::FRootMotionSource_FollowCharacterRotation() {
    ConstantStrength = 1;
    bWasWalkingLastFrame = false;
    bWasFallingLastFrame = false;
    WalkingAccumulatedTime = 1;
    FallingAccumulatedTime = 1;
}

