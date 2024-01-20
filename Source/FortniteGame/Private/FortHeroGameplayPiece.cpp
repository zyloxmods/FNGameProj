#include "FortHeroGameplayPiece.h"

FFortHeroGameplayPiece::FFortHeroGameplayPiece() {
    this->bUseGlobalDefaultMinima = false;
    this->MinimumHeroTier = EFortItemTier::No_Tier;
    this->MinimumHeroLevel = 0;
    this->MinimumHeroRarity = EFortRarity::Common;
}

