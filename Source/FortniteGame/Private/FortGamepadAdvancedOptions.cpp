#include "FortGamepadAdvancedOptions.h"

FFortGamepadAdvancedOptions::FFortGamepadAdvancedOptions() {
    LookHorizontalSpeed = 0;
    LookVerticalSpeed = 0;
    LookHorizontalSpeedAds = 0;
    LookVerticalSpeedAds = 0;
    LookHorizontalBoostSpeed = 0;
    LookVerticalBoostSpeed = 0;
    LookBoostAccelerationTime = 1;
    LookHorizontalBoostSpeedAds = 0;
    LookVerticalBoostSpeedAds = 0;
    LookBoostAccelerationTimeAds = 1;
    bInstantBoostWhenBuilding = false;
    LookEaseTime = 1;
    LookInputCurve = EFortGamepadLookInputCurve::Linear;
    AimAssistStrength = 0;
    bUseLegacyControls = false;
}

