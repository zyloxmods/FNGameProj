#include "ItemLoadoutTeamMap.h"

FItemLoadoutTeamMap::FItemLoadoutTeamMap() {
    TeamIndex = 0;
    LoadoutIndex = 0;
    UpdateOverrideType = EAthenaInventorySpawnOverride::NoOverride;
    DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
}

