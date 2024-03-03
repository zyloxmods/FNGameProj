#include "FortTouchAimAssistSettings.h"

FFortTouchAimAssistSettings::FFortTouchAimAssistSettings() {
    this->AssistReticleWidth = 1;
    this->AssistReticleHeight = 1;
    this->AutoFireReticleWidth = 1;
    this->AutoFireReticleHeight = 1;
    this->AutoFireTrackingReticleWidth = 1;
    this->AutoFireTrackingReticleHeight = 1;
    this->TargetingReticleWidth = 1;
    this->TargetingReticleHeight = 1;
    this->TargetRange = 1;
    this->TargetWeightCurve = NULL;
    this->PullStrengthYawCurve = NULL;
    this->PullStrengthPitchCurve = NULL;
    this->PullMaxRate = 1;
    this->AutoTrackDuration = 1;
    this->AutoTrackPullStrength = 1;
    this->ProjectileMinSpeedForAssist = 1;
    this->ProjectileMaxLookAheadTime = 1;
}

