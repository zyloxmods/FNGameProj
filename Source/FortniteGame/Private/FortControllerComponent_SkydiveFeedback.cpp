#include "FortControllerComponent_SkydiveFeedback.h"

UFortControllerComponent_SkydiveFeedback::UFortControllerComponent_SkydiveFeedback() {
    SkydiveCamShake = NULL;
    SkydiveCamShakeClass = NULL;
    DropSpeedForMinShakeMultiplier = 1;
    DropSpeedForMaxShakeMultiplier = 1;
    DropSpeedBlendExponent = 1;
    CachedSkydiveDropSpeedMin = 1;
    CachedSkydiveDropSpeedMax = 1;
}

