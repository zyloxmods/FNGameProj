#include "CommonInputSettings.h"

UCommonInputSettings::UCommonInputSettings() {
    this->bEnableInputMethodThrashingProtection = true;
    this->InputMethodThrashingLimit = 0;
    this->InputMethodThrashingWindowInSeconds = 4294967295;
    this->InputMethodThrashingCooldownInSeconds = 4294967295;
    this->bAllowOutOfFocusDeviceInput = true;
    this->InputDataClass = NULL;
}

