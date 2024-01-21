#include "FortAnimNode_SpeedWarping.h"

FFortAnimNode_SpeedWarping::FFortAnimNode_SpeedWarping() {
    this->SpeedWarpingAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->FloorNormalAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->GravityDirAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->SpeedScaling = 0.00f;
    this->PelvisPostAdjustmentAlpha = 0.00f;
    this->PelvisAdjustmentMaxIter = 0;
    this->bAdjustThighBonesRotation = false;
    this->bClampIKUsingFKLeg = false;
    this->bOrientSpeedWarpingAxisBasedOnFloorNormal = false;
    this->CachedDeltaTime = 0.00f;
}

