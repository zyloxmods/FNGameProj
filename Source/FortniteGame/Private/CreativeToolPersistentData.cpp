#include "CreativeToolPersistentData.h"

FCreativeToolPersistentData::FCreativeToolPersistentData() {
    this->GridSnapIndex = 0;
    this->RotationAxisIndex = 0;
    this->SelectedScaleAxis = 0;
    this->bShouldUsePrecisionGridSnapping = false;
    this->bAllowGravityOnPlace = false;
    this->bShouldDestroyPropsWhenPlacing = false;
    this->HitTraceRule = 0;
    this->bIsScalingInsteadOfRotating = false;
}

