#include "FortGamepadBasicOptions.h"

FFortGamepadBasicOptions::FFortGamepadBasicOptions() {
    this->LookSensitivityPreset = EFortGamepadSensitivity::Invalid;
    this->LookSensitivityPresetAds = EFortGamepadSensitivity::Invalid;
    this->LookBuildModeMultiplier = 1;
    this->LookEditModeMultiplier = 1;
    this->bUseAdvancedOptions = false;
}

