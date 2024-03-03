#include "Stat.h"

UStat::UStat() {
    this->HighestPeriodToTrack = EStatRecordingPeriod::Frame;
    this->AbsoluteMaxValue = 0;
}

