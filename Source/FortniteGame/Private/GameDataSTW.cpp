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
    ScoreDisplayFactor = 1;
    ScoreDivisor = 0;
    XPMult = 0;
    GroupScoreRates[0] = 1;
    GroupScoreRates[1] = 1;
    GroupScoreRates[2] = 1;
    GroupScoreRates[3] = 1;
    GroupScoreRates[4] = 1;
    ScoreToXPLinearRate = 1;
    LinearEnd = 0;
    XpPerAccountLevel = 0;
    CriticalMatch_XpBonusPercent = 1;
    PersonalBoost_XpBonusPercent = 1;
    GroupBoost_XpBonusPercent = 1;
    GroupBoost_BuffMultiplier = 1;
    Rest_XpBonusPercent = 1;
    LowXpConningValue = 1;
    VeryLowXpConningValue = 1;
    NoXpConningValue = 1;
    MaxCraftQueueSize = 0;
    SquadMemberStatBonusMultiplier = 1;
    DailyMissionAlertQuota = 0;
    MinLevelToPromoteItem = 0;
    LevelsPerItemPromotion = 0;
    MaxPromotionsPerItem = 0;
    CachedScoreMultiplierDataTable = NULL;
    FORTAttributeToPowerMultiplier = 1;
}

