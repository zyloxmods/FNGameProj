#include "CommonInputPlatformData.h"

FCommonInputPlatformData::FCommonInputPlatformData() {
    this->bSupported = false;
    this->DefaultInputType = ECommonInputType::MouseAndKeyboard;
    this->bSupportsMouseAndKeyboard = false;
    this->bSupportsGamepad = false;
    this->DefaultGamepadType = ECommonGamepadType::XboxOneController;
    this->bCanChangeGamepadType = false;
    this->bSupportsTouch = false;
}

