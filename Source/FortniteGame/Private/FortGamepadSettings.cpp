#include "FortGamepadSettings.h"

UFortGamepadSettings::UFortGamepadSettings() {
    this->GamepadLookCurve = NULL;
    this->GamepadLookSensitivityCurve = NULL;
    this->GamepadLookScaleDownsights = 0.38f;
    this->GamepadLookScaleScope = 0.25f;
    this->GamepadLookScaleDownsightsDecayTime = 0.50f;
    this->AimAssistStrength = 0.50f;
    this->AimAssistStrengthDownsights = 1.00f;
    this->AimAssistStrengthDBNO = 0.25f;
    this->GamepadLookAccelTime = 0.20f;
    this->GamepadLookDecelTime = 0.10f;
    this->AimAssistPullStrength = 0.05f;
    this->AimAssistPullMaxRate = 15.00f;
    this->AimAssistPullRampUpTime = 0.30f;
    this->AimAssistPullDecayTime = 0.50f;
    this->AimAssistInitialDownsightStrength = 0.06f;
    this->AimAssistInitialDownsightTime = 0.20f;
    this->SlowMinDistance = 100.00f;
    this->SlowMinStrength = 0.40f;
    this->SlowMaxDistance = 1500.00f;
    this->SlowMaxStrength = 0.70f;
    this->SlowDecayTime = 0.50f;
    this->EditModePullStrengthStationary = 6.00f;
    this->EditModePullStrengthMovingNewTile = 6.50f;
    this->EditModePullStrengthMovingWithinTile = 4.00f;
    this->EditModePullMinDistance = 175.00f;
    this->EditModePullMaxDistance = 400.00f;
    this->EditModePullScaleFlat = 0.50f;
    this->EditModePullMaxRate = 150.00f;
    this->EditModeSlowMinDistance = 50.00f;
    this->EditModeSlowMinStrength = 0.10f;
    this->EditModeSlowMaxDistance = 500.00f;
    this->EditModeSlowMaxStrength = 0.30f;
    this->GamepadSettingsV2 = NULL;
}

