#include "FortRootMotionSource_FallingBoost.h"

FFortRootMotionSource_FallingBoost::FFortRootMotionSource_FallingBoost() {
    VerticalImpulse = 1;
    GravityScalar = 1;
    MaxAcceleration = 1;
    LateralFriction = 1;
    MaxLateralSpeed = 1;
    bHasAppliedVerticalImpulse = false;
}

