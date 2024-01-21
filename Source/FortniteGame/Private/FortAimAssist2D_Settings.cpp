#include "FortAimAssist2D_Settings.h"

FFortAimAssist2D_Settings::FFortAimAssist2D_Settings() {
    this->AssistInnerReticleWidth = 0.00f;
    this->AssistInnerReticleHeight = 0.00f;
    this->AssistOuterReticleWidth = 0.00f;
    this->AssistOuterReticleHeight = 0.00f;
    this->TargetingReticleWidth = 0.00f;
    this->TargetingReticleHeight = 0.00f;
    this->TargetRange = 0.00f;
    this->TargetWeightCurve = NULL;
    this->PullInnerStrengthHip = 0.00f;
    this->PullInnerStrengthAds = 0.00f;
    this->PullOuterStrengthHip = 0.00f;
    this->PullOuterStrengthAds = 0.00f;
    this->PullLerpInRate = 0.00f;
    this->PullLerpOutRate = 0.00f;
    this->PullMaxRotationRate = 0.00f;
    this->SlowInnerStrengthHip = 0.00f;
    this->SlowInnerStrengthAds = 0.00f;
    this->SlowOuterStrengthHip = 0.00f;
    this->SlowOuterStrengthAds = 0.00f;
    this->SlowLerpInRate = 0.00f;
    this->SlowLerpOutRate = 0.00f;
    this->SlowMinRotationRate = 0.00f;
}

