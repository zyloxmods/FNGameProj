#include "FortAnimNode_SpeedWarping.h"

FFortAnimNode_SpeedWarping::FFortAnimNode_SpeedWarping() {
    this->SpeedWarpingAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->FloorNormalAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->GravityDirAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    this->SpeedScaling = 1;
    this->PelvisPostAdjustmentAlpha = 1;
    this->PelvisAdjustmentMaxIter = 0;
    this->bAdjustThighBonesRotation = false;
    this->bClampIKUsingFKLeg = false;
    this->bOrientSpeedWarpingAxisBasedOnFloorNormal = false;
    this->CachedDeltaTime = 1;
}

