#include "HeroItem.h"

FHeroItem::FHeroItem() {
    this->Quantity = 0;
    this->Replenishment = EFortReplenishmentType::Restricted;
    this->bShowInAbilityScreen = false;
}

