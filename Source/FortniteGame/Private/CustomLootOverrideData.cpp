#include "CustomLootOverrideData.h"

FCustomLootOverrideData::FCustomLootOverrideData() {
    this->CustomLootType = ECustomLootSelection::Default;
    this->LootTierData = NULL;
    this->LootPackages = NULL;
    this->ExperimentalLootTierData = NULL;
    this->ExperimentalLootPackages = NULL;
}

