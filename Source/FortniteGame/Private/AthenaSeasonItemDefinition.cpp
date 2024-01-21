#include "AthenaSeasonItemDefinition.h"

UAthenaSeasonItemDefinition::UAthenaSeasonItemDefinition() {
    this->SeasonNumber = -1;
    this->NumSeasonLevels = 10;
    this->NumBookLevels = 10;
    this->SeasonShopVisibility = EAthenaSeasonShopVisibility::Hide;
    this->ChallengesVisibility = EAthenaChallengeTabVisibility::Hide;
    this->SeasonXpCurve = NULL;
    this->BookXpCurve = NULL;
    this->SeasonalGlyphChallengeBundle = NULL;
    this->SeasonalGlyphRewards = NULL;
    this->ChallengeSchedulePaid = NULL;
    ItemType = EFortItemType::AthenaSeason;
}

