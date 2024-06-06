#include "GameDifficultyInfo.h"

FGameDifficultyInfo::FGameDifficultyInfo() {
    bIsOnboarding = false;
    Difficulty = 1;
    DifficultyMatchmakingMinOverride = 1;
    DifficultyMatchmakingMaxOverride = 1;
    LootLevel = 0;
    RatingsEnforcement = ERatingsEnforcementType::Default;
    RequiredRating = 0;
    MaximumRating = 0;
    PvPRating = 0;
    RecommendedRating = 0;
    ScoreBonus = 1;
    NumDifficultyIncreases = 0;
    DefaultPlayerLives = 0;
}

