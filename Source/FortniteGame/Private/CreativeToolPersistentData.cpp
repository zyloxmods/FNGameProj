#include "CreativeToolPersistentData.h"

FCreativeToolPersistentData::FCreativeToolPersistentData() {
    GridSnapIndex = 0;
    RotationAxisIndex = 0;
    SelectedScaleAxis = 0;
    bShouldUsePrecisionGridSnapping = false;
    bAllowGravityOnPlace = false;
    bShouldDestroyPropsWhenPlacing = false;
    HitTraceRule = 0;
    bIsScalingInsteadOfRotating = false;
}

