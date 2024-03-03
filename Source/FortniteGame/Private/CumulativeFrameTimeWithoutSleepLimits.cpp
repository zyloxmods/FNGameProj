#include "CumulativeFrameTimeWithoutSleepLimits.h"

FCumulativeFrameTimeWithoutSleepLimits::FCumulativeFrameTimeWithoutSleepLimits() {
    this->FrameTimeWithoutSleep = 4294967295;
    this->MaxCumulativeFrameTimeAboveThreshold = 4294967295;
    this->MaxNumberOfFramesAboveThreshold = 4294967295;
}

