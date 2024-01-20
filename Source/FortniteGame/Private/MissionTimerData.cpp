#include "MissionTimerData.h"

FMissionTimerData::FMissionTimerData() {
    this->bTimerIsPaused = false;
    this->OriginalTimePeriod = 0.00f;
    this->ReplicatedRemainingTime = 0.00f;
    this->TimeAddedOrRemoved = 0.00f;
    this->LastTimeAddedOrRemoved = 0.00f;
    this->ClientRemainingTime = 0.00f;
}

