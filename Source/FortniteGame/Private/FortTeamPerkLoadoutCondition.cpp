#include "FortTeamPerkLoadoutCondition.h"

FFortTeamPerkLoadoutCondition::FFortTeamPerkLoadoutCondition() {
    NumTimesSatisfiable = 0;
    bConsiderMinimumTier = false;
    bConsiderMaximumTier = false;
    bConsiderMinimumLevel = false;
    bConsiderMaximumLevel = false;
    bConsiderMinimumRarity = false;
    bConsiderMaximumRarity = false;
    MinimumHeroTier = EFortItemTier::No_Tier;
    MaximumHeroTier = EFortItemTier::No_Tier;
    MinimumHeroLevel = 0;
    MaximumHeroLevel = 0;
    MinimumHeroRarity = EFortRarity::Common;
    MaximumHeroRarity = EFortRarity::Common;
}

