#include "EndZoneScoreAndAwards.h"

FEndZoneScoreAndAwards::FEndZoneScoreAndAwards() {
    this->bResultsPendingSave = false;
    this->TotalScore = 0;
    this->bCriticalMatchBonus = false;
    this->bDidLeech = false;
    this->NumMissionPoints = 0;
    this->MissionLeechScaling = 1;
}

