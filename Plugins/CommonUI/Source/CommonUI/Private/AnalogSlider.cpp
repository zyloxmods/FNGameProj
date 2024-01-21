#include "AnalogSlider.h"

UAnalogSlider::UAnalogSlider() {
    this->bShouldUseScalingSpeedMultiplier = true;
    this->MaxScalingSpeedMultiplier = 30.00f;
    this->DelayToIncreaseScalingSpeed = 0.25f;
    this->DelayToResetScalingSpeed = 0.20f;
}

