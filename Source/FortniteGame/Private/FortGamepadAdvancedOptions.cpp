#include "FortGamepadAdvancedOptions.h"

FFortGamepadAdvancedOptions::FFortGamepadAdvancedOptions() {
    this->LookHorizontalSpeed = 0;
    this->LookVerticalSpeed = 0;
    this->LookHorizontalSpeedAds = 0;
    this->LookVerticalSpeedAds = 0;
    this->LookHorizontalBoostSpeed = 0;
    this->LookVerticalBoostSpeed = 0;
    this->LookBoostAccelerationTime = 0.00f;
    this->LookHorizontalBoostSpeedAds = 0;
    this->LookVerticalBoostSpeedAds = 0;
    this->LookBoostAccelerationTimeAds = 0.00f;
    this->LookEaseTime = 0.00f;
    this->bStabilizeLookInput = false;
    this->bUseRadialLookRates = false;
    this->AimAssistStrength = 0;
    this->bUseLegacyControls = false;
}

