#include "CumulativeFrameTimeWithoutSleepLimits.h"

FCumulativeFrameTimeWithoutSleepLimits::FCumulativeFrameTimeWithoutSleepLimits() {
    this->FrameTimeWithoutSleep = 0.00f;
    this->MaxCumulativeFrameTimeAboveThreshold = 0.00f;
    this->MaxNumberOfFramesAboveThreshold = 0.00f;
}

