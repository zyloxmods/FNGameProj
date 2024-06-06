#include "FortGamepadSettings.h"

UFortGamepadSettings::UFortGamepadSettings() {
    GamepadLookCurve = NULL;
    GamepadLookSensitivityCurve = NULL;
    GamepadLookScaleDownsights = 1;
    GamepadLookScaleScope = 1;
    GamepadLookScaleDownsightsDecayTime = 1;
    AimAssistStrength = 1;
    AimAssistStrengthDownsights = 1;
    AimAssistStrengthDBNO = 1;
    GamepadLookAccelTime = 1;
    GamepadLookDecelTime = 1;
    AimAssistPullStrength = 1;
    AimAssistPullMaxRate = 1;
    AimAssistPullRampUpTime = 1;
    AimAssistPullDecayTime = 1;
    AimAssistInitialDownsightStrength = 1;
    AimAssistInitialDownsightTime = 1;
    SlowMinDistance = 1;
    SlowMinStrength = 1;
    SlowMaxDistance = 1;
    SlowMaxStrength = 1;
    SlowDecayTime = 1;
    EditModePullStrengthStationary = 1;
    EditModePullStrengthMovingNewTile = 1;
    EditModePullStrengthMovingWithinTile = 1;
    EditModePullMinDistance = 1;
    EditModePullMaxDistance = 1;
    EditModePullScaleFlat = 1;
    EditModePullMaxRate = 1;
    EditModeSlowMinDistance = 1;
    EditModeSlowMinStrength = 1;
    EditModeSlowMaxDistance = 1;
    EditModeSlowMaxStrength = 1;
}

