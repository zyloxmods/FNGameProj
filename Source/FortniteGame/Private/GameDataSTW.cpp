#include "GameDataSTW.h"

int32 UGameDataSTW::GetXpPerAccountLevel() {
    return 0;
}

float UGameDataSTW::GetTeamXpBoost() {
    return 0.0f;
}

TSoftObjectPtr<UFortTeamPerkItemDefinition> UGameDataSTW::GetRecruitmentRewardForHero(UFortHeroType* Hero) {
    return NULL;
}

float UGameDataSTW::GetPersonalXpBoost() {
    return 0.0f;
}

UGameDataSTW::UGameDataSTW() {
    this->ScoreDisplayFactor = 1;
    this->ScoreDivisor = 0;
    this->XPMult = 0;
    this->GroupScoreRates[0] = 1;
    this->GroupScoreRates[1] = 1;
    this->GroupScoreRates[2] = 1;
    this->GroupScoreRates[3] = 1;
    this->GroupScoreRates[4] = 1;
    this->ScoreToXPLinearRate = 1;
    this->LinearEnd = 0;
    this->XpPerAccountLevel = 0;
    this->CriticalMatch_XpBonusPercent = 1;
    this->PersonalBoost_XpBonusPercent = 1;
    this->GroupBoost_XpBonusPercent = 1;
    this->GroupBoost_BuffMultiplier = 1;
    this->Rest_XpBonusPercent = 1;
    this->LowXpConningValue = 1;
    this->VeryLowXpConningValue = 1;
    this->NoXpConningValue = 1;
    this->MaxCraftQueueSize = 0;
    this->SquadMemberStatBonusMultiplier = 1;
    this->DailyMissionAlertQuota = 0;
    this->MinLevelToPromoteItem = 0;
    this->LevelsPerItemPromotion = 0;
    this->MaxPromotionsPerItem = 0;
    this->CachedScoreMultiplierDataTable = NULL;
    this->FORTAttributeToPowerMultiplier = 1;
}

