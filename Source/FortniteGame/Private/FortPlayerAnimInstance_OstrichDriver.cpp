#include "FortPlayerAnimInstance_OstrichDriver.h"

UFortPlayerAnimInstance_OstrichDriver::UFortPlayerAnimInstance_OstrichDriver() {
    this->BouncePlayRateValue = 1;
    this->LegsBounceAlphaValue = 1;
    this->LegsBounceAlphaWhenSkytubing = 1;
    this->LegsBounceAlphaNoSkytubing = 1;
    this->LegsBounceAlphaInterpSpeed = 1;
    this->bIsSkyTubing = false;
    this->bIsMechMoving2D = false;
}

