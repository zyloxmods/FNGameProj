#include "FortRootMotionSource_FallingBoost.h"

FFortRootMotionSource_FallingBoost::FFortRootMotionSource_FallingBoost() {
    this->VerticalImpulse = 1;
    this->GravityScalar = 1;
    this->MaxAcceleration = 1;
    this->LateralFriction = 1;
    this->MaxLateralSpeed = 1;
    this->bHasAppliedVerticalImpulse = false;
}

