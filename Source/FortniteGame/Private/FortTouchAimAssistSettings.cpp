#include "FortTouchAimAssistSettings.h"

FFortTouchAimAssistSettings::FFortTouchAimAssistSettings() {
    this->ReticleWidth = 0.00f;
    this->ReticleHeight = 0.00f;
    this->ReticleDepth = 0.00f;
    this->AutoFireReticleWidth = 0.00f;
    this->AutoFireReticleHeight = 0.00f;
    this->ProjectileMinSpeedForAssist = 0.00f;
    this->ProjectileMaxLookAheadTime = 0.00f;
    this->TargetRange = 0.00f;
    this->TargetWeightCurve = NULL;
    this->PullStrengthYawCurve = NULL;
    this->PullStrengthPitchCurve = NULL;
    this->PullMaxRate = 0.00f;
    this->AutoTrackDuration = 0.00f;
    this->AutoTrackPullStrength = 0.00f;
}

