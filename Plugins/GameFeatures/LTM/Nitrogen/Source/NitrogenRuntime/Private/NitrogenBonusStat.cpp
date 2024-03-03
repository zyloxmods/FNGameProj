#include "NitrogenBonusStat.h"

FNitrogenBonusStat::FNitrogenBonusStat() {
    this->AwardPoints = 0;
    this->AwardCondition = ENitrogenBonusCondition::MustMeetGoal;
    this->ScoreReason = ENitrogenScoreReason::None;
    this->CosmeticLoadoutData = NULL;
    this->TipEmojiTexture = NULL;
    this->FarePortraitTexture = NULL;
}

