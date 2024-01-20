#include "Stat.h"

UStat::UStat() {
    this->HighestPeriodToTrack = EStatRecordingPeriod::Minute;
    this->AbsoluteMaxValue = 0;
}

