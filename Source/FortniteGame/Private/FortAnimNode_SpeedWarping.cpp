#include "FortAnimNode_SpeedWarping.h"

FFortAnimNode_SpeedWarping::FFortAnimNode_SpeedWarping() {
    SpeedWarpingAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    FloorNormalAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    GravityDirAxisMode = ESpeedWarpingAxisMode::IKFootRootLocalX;
    SpeedScaling = 1;
    PelvisPostAdjustmentAlpha = 1;
    PelvisAdjustmentMaxIter = 0;
    bAdjustThighBonesRotation = false;
    bClampIKUsingFKLeg = false;
    bOrientSpeedWarpingAxisBasedOnFloorNormal = false;
    CachedDeltaTime = 1;
}

