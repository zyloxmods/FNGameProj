#include "MissionTimerData.h"

FMissionTimerData::FMissionTimerData() {
    this->bTimerIsPaused = false;
    this->OriginalTimePeriod = 1;
    this->ReplicatedRemainingTime = 1;
    this->TimeAddedOrRemoved = 1;
    this->LastTimeAddedOrRemoved = 1;
    this->ClientRemainingTime = 1;
}

