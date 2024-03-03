#include "FortGamepadSettings.h"

UFortGamepadSettings::UFortGamepadSettings() {
    this->GamepadLookCurve = NULL;
    this->GamepadLookSensitivityCurve = NULL;
    this->GamepadLookScaleDownsights = 1;
    this->GamepadLookScaleScope = 1;
    this->GamepadLookScaleDownsightsDecayTime = 1;
    this->AimAssistStrength = 1;
    this->AimAssistStrengthDownsights = 1;
    this->AimAssistStrengthDBNO = 1;
    this->GamepadLookAccelTime = 1;
    this->GamepadLookDecelTime = 1;
    this->AimAssistPullStrength = 1;
    this->AimAssistPullMaxRate = 1;
    this->AimAssistPullRampUpTime = 1;
    this->AimAssistPullDecayTime = 1;
    this->AimAssistInitialDownsightStrength = 1;
    this->AimAssistInitialDownsightTime = 1;
    this->SlowMinDistance = 1;
    this->SlowMinStrength = 1;
    this->SlowMaxDistance = 1;
    this->SlowMaxStrength = 1;
    this->SlowDecayTime = 1;
    this->EditModePullStrengthStationary = 1;
    this->EditModePullStrengthMovingNewTile = 1;
    this->EditModePullStrengthMovingWithinTile = 1;
    this->EditModePullMinDistance = 1;
    this->EditModePullMaxDistance = 1;
    this->EditModePullScaleFlat = 1;
    this->EditModePullMaxRate = 1;
    this->EditModeSlowMinDistance = 1;
    this->EditModeSlowMinStrength = 1;
    this->EditModeSlowMaxDistance = 1;
    this->EditModeSlowMaxStrength = 1;
}

