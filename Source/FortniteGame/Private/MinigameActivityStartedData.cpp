#include "MinigameActivityStartedData.h"

FMinigameActivityStartedData::FMinigameActivityStartedData() {
    this->Stat = EMinigameActivityStat::Time;
    this->InitialStatValue = 1;
    this->InitialScore = 0;
    this->TotalScore = 0;
}

