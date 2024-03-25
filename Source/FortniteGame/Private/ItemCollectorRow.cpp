#include "ItemCollectorRow.h"

FItemCollectorRow::FItemCollectorRow() {
    this->OverrideItemsTable = NULL;
    this->OverrideRarity = EFortRarity::Handmade;
    this->OverrideGoal = 0;
    this->bOverrideLootRules = 0;
    this->bUseOverrideRarity = 0;
}

