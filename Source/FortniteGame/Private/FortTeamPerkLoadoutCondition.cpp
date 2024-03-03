#include "FortTeamPerkLoadoutCondition.h"

FFortTeamPerkLoadoutCondition::FFortTeamPerkLoadoutCondition() {
    this->NumTimesSatisfiable = 0;
    this->bConsiderMinimumTier = false;
    this->bConsiderMaximumTier = false;
    this->bConsiderMinimumLevel = false;
    this->bConsiderMaximumLevel = false;
    this->bConsiderMinimumRarity = false;
    this->bConsiderMaximumRarity = false;
    this->MinimumHeroTier = EFortItemTier::No_Tier;
    this->MaximumHeroTier = EFortItemTier::No_Tier;
    this->MinimumHeroLevel = 0;
    this->MaximumHeroLevel = 0;
    this->MinimumHeroRarity = EFortRarity::Common;
    this->MaximumHeroRarity = EFortRarity::Common;
}

