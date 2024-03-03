#include "GameDifficultyInfo.h"

FGameDifficultyInfo::FGameDifficultyInfo() {
    this->bIsOnboarding = false;
    this->Difficulty = 1;
    this->DifficultyMatchmakingMinOverride = 1;
    this->DifficultyMatchmakingMaxOverride = 1;
    this->LootLevel = 0;
    this->RatingsEnforcement = ERatingsEnforcementType::Default;
    this->RequiredRating = 0;
    this->MaximumRating = 0;
    this->PvPRating = 0;
    this->RecommendedRating = 0;
    this->ScoreBonus = 1;
    this->NumDifficultyIncreases = 0;
    this->DefaultPlayerLives = 0;
}

