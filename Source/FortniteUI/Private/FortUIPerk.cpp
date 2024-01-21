#include "FortUIPerk.h"

FFortUIPerk::FFortUIPerk() {
    this->Hero = NULL;
    this->Tier = EFortItemTier::No_Tier;
    this->SupportBonusType = EFortSupportBonusType::Normal;
    this->bIsTierPerk = false;
    this->bIsUpgrade = false;
    this->bIsEvolution = false;
    this->bIsEvolutionBranch = false;
}

