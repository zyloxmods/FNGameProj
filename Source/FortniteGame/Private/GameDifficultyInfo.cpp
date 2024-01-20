#include "GameDifficultyInfo.h"

FGameDifficultyInfo::FGameDifficultyInfo() {
    this->ContentAccountLevel = 0;
    this->Difficulty = 0.00f;
    this->DifficultyMatchmakingMinOverride = 0.00f;
    this->DifficultyMatchmakingMaxOverride = 0.00f;
    this->LootLevel = 0;
    this->RequiredRating = 0;
    this->PvPRating = 0;
    this->RecommendedRating = 0;
    this->ScoreBonus = 0.00f;
    this->NumDifficultyIncreases = 0;
    this->DefaultPlayerLives = 0;
}

