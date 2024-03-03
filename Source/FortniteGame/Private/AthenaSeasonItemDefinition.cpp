#include "AthenaSeasonItemDefinition.h"

UAthenaSeasonItemDefinition::UAthenaSeasonItemDefinition() {
    this->bXpOnlySeason = false;
    this->bUseAccoladePunchCard = false;
    this->SeasonXpOnlyExtendedCurve = NULL;
    this->DailyPunchCard = NULL;
    this->RepeatableDailiesCard = NULL;
    this->RestedXpDailyGrant = 0;
    this->RestedXpMaxAccrue = 0;
    this->RestedXpMultiplier = 1;
    this->SeasonStartCalendarOffsetDays = 0;
    this->SeasonNumber = 0;
    this->NumSeasonLevels = 0;
    this->NumBookLevels = 0;
    this->NumAdditionalBookLevels = 0;
    this->SeasonShopVisibility = EAthenaSeasonShopVisibility::Hide;
    this->ChallengesVisibility = EAthenaChallengeTabVisibility::Hide;
    this->SeasonXpCurve = NULL;
    this->BookXpCurve = NULL;
    this->SeasonalGlyphChallengeBundle = NULL;
    this->SeasonalGlyphRewards = NULL;
    this->ChallengeSchedulePaid = NULL;
    this->bRemoveAllDailyQuestsAtSeasonEnd = false;
}

