#include "FortControllerComponent_SkydiveFeedback.h"

UFortControllerComponent_SkydiveFeedback::UFortControllerComponent_SkydiveFeedback() {
    this->SkydiveCamShake = NULL;
    this->SkydiveCamShakeClass = NULL;
    this->DropSpeedForMinShakeMultiplier = 1;
    this->DropSpeedForMaxShakeMultiplier = 1;
    this->DropSpeedBlendExponent = 1;
    this->CachedSkydiveDropSpeedMin = 1;
    this->CachedSkydiveDropSpeedMax = 1;
}

