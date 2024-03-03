#include "ItemLoadoutTeamMap.h"

FItemLoadoutTeamMap::FItemLoadoutTeamMap() {
    this->TeamIndex = 0;
    this->LoadoutIndex = 0;
    this->UpdateOverrideType = EAthenaInventorySpawnOverride::NoOverride;
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
}

