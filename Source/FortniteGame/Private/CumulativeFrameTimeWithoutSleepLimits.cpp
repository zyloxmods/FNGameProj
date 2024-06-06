#include "CumulativeFrameTimeWithoutSleepLimits.h"

FCumulativeFrameTimeWithoutSleepLimits::FCumulativeFrameTimeWithoutSleepLimits() {
    FrameTimeWithoutSleep = 4294967295;
    MaxCumulativeFrameTimeAboveThreshold = 4294967295;
    MaxNumberOfFramesAboveThreshold = 4294967295;
}

