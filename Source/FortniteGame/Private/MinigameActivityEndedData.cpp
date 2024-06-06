#include "MinigameActivityEndedData.h"

FMinigameActivityEndedData::FMinigameActivityEndedData() {
    bSuccessfullyCompleted = false;
    Stat = EMinigameActivityStat::Time;
    FinalStatValue = 1;
    FinalStatBestValue = 1;
    FinalScore = 0;
    TotalScore = 0;
    Rank = 0;
}

