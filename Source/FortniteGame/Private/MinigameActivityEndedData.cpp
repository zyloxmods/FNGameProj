#include "MinigameActivityEndedData.h"

FMinigameActivityEndedData::FMinigameActivityEndedData() {
    this->bSuccessfullyCompleted = false;
    this->Stat = EMinigameActivityStat::Time;
    this->FinalStatValue = 1;
    this->FinalStatBestValue = 1;
    this->FinalScore = 0;
    this->TotalScore = 0;
    this->Rank = 0;
}

