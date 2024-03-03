#include "FortGamepadAdvancedOptions.h"

FFortGamepadAdvancedOptions::FFortGamepadAdvancedOptions() {
    this->LookHorizontalSpeed = 0;
    this->LookVerticalSpeed = 0;
    this->LookHorizontalSpeedAds = 0;
    this->LookVerticalSpeedAds = 0;
    this->LookHorizontalBoostSpeed = 0;
    this->LookVerticalBoostSpeed = 0;
    this->LookBoostAccelerationTime = 1;
    this->LookHorizontalBoostSpeedAds = 0;
    this->LookVerticalBoostSpeedAds = 0;
    this->LookBoostAccelerationTimeAds = 1;
    this->bInstantBoostWhenBuilding = false;
    this->LookEaseTime = 1;
    this->LookInputCurve = EFortGamepadLookInputCurve::Linear;
    this->AimAssistStrength = 0;
    this->bUseLegacyControls = false;
}

