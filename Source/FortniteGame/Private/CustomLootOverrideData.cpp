#include "CustomLootOverrideData.h"

FCustomLootOverrideData::FCustomLootOverrideData() {
    CustomLootType = ECustomLootSelection::Default;
    LootTierData = NULL;
    LootPackages = NULL;
    ExperimentalLootTierData = NULL;
    ExperimentalLootPackages = NULL;
}

