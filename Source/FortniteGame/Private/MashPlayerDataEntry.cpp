#include "MashPlayerDataEntry.h"

FMashPlayerDataEntry::FMashPlayerDataEntry() {
    this->PlayerState = NULL;
    this->Scores[0] = 0;
    this->Scores[1] = 0;
    this->Scores[2] = 0;
    this->Scores[3] = 0;
    this->Scores[4] = 0;
    this->Scores[5] = 0;
    this->Scores[6] = 0;
    this->Scores[7] = 0;
    this->Scores[8] = 0;
    this->Scores[9] = 0;
    this->Scores[10] = 0;
    this->Scores[11] = 0;
    this->Scores[12] = 0;
    this->Scores[13] = 0;
    this->TotalScore = 0;
    this->StreakScoreLevel = 0;
    this->StreakMultiplierCurrentKillCount = 0;
    this->LastAIKillTime = 1;
    this->TotalAIKillCount = 0;
}

