#include "MissionTimerData.h"

FMissionTimerData::FMissionTimerData() {
    bTimerIsPaused = false;
    OriginalTimePeriod = 1;
    ReplicatedRemainingTime = 1;
    TimeAddedOrRemoved = 1;
    LastTimeAddedOrRemoved = 1;
    ClientRemainingTime = 1;
}

