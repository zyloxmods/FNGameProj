#include "EndZoneScoreAndAwards.h"

FEndZoneScoreAndAwards::FEndZoneScoreAndAwards() {
    bResultsPendingSave = false;
    TotalScore = 0;
    bCriticalMatchBonus = false;
    bDidLeech = false;
    NumMissionPoints = 0;
    MissionLeechScaling = 1;
}

