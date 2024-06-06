#include "ItemCollectorRow.h"

FItemCollectorRow::FItemCollectorRow() {
    OverrideItemsTable = NULL;
    OverrideRarity = EFortRarity::Common;
    OverrideGoal = 0;
    bOverrideLootRules = 0;
    bUseOverrideRarity = 0;
}

