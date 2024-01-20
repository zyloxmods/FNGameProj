#include "FortGamepadSettingsV2.h"

UFortGamepadSettingsV2::UFortGamepadSettingsV2() {
    this->LookInputCurve = NULL;
    this->LookRateSensitivityCurve = NULL;
    this->LookPitchScale = 0.60f;
    this->LookInnerAccelTime = 0.20f;
    this->LookInnerDecelTime = 0.10f;
    this->LookOuterAccelDeflection = 0.95f;
    this->LookOuterAccelScale = 0.60f;
    this->LookOuterAccelTime = 0.20f;
    this->LookOuterDecelTime = 0.20f;
}

