#include "FortTouchAimAssistSettings.h"

FFortTouchAimAssistSettings::FFortTouchAimAssistSettings() {
    AssistReticleWidth = 1;
    AssistReticleHeight = 1;
    AutoFireReticleWidth = 1;
    AutoFireReticleHeight = 1;
    AutoFireTrackingReticleWidth = 1;
    AutoFireTrackingReticleHeight = 1;
    TargetingReticleWidth = 1;
    TargetingReticleHeight = 1;
    TargetRange = 1;
    TargetWeightCurve = NULL;
    PullStrengthYawCurve = NULL;
    PullStrengthPitchCurve = NULL;
    PullMaxRate = 1;
    AutoTrackDuration = 1;
    AutoTrackPullStrength = 1;
    ProjectileMinSpeedForAssist = 1;
    ProjectileMaxLookAheadTime = 1;
}

