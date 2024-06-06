#include "AthenaSeasonItemDefinition.h"

UAthenaSeasonItemDefinition::UAthenaSeasonItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bXpOnlySeason = false;
    bUseAccoladePunchCard = false;
    SeasonXpOnlyExtendedCurve = NULL;
    DailyPunchCard = NULL;
    RepeatableDailiesCard = NULL;
    RestedXpDailyGrant = 0;
    RestedXpMaxAccrue = 0;
    RestedXpMultiplier = 1;
    SeasonStartCalendarOffsetDays = 0;
    SeasonNumber = 0;
    NumSeasonLevels = 0;
    NumBookLevels = 0;
    NumAdditionalBookLevels = 0;
    SeasonShopVisibility = EAthenaSeasonShopVisibility::Hide;
    ChallengesVisibility = EAthenaChallengeTabVisibility::Hide;
    SeasonXpCurve = NULL;
    BookXpCurve = NULL;
    SeasonalGlyphChallengeBundle = NULL;
    SeasonalGlyphRewards = NULL;
    ChallengeSchedulePaid = NULL;
    bRemoveAllDailyQuestsAtSeasonEnd = false;
}

