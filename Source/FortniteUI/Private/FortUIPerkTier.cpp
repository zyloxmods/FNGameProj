#include "FortUIPerkTier.h"

FFortUIPerkTier::FFortUIPerkTier() {
    this->HeroSpecialization = NULL;
    this->CurrentHero = NULL;
    this->Tier = EFortItemTier::No_Tier;
    this->bIsUpgrade = false;
    this->bIsEvolution = false;
}

