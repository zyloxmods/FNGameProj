#include "FortAthenaMutator_InventoryOverride.h"

AFortAthenaMutator_InventoryOverride::AFortAthenaMutator_InventoryOverride() {
    bWantsAutoTDMActivation = true;
    DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    TrapDropOverride = EAthenaLootDropOverride::NoOverride;
    WeaponDropOverride = EAthenaLootDropOverride::NoOverride;
    MaterialDropOverride = EAthenaLootDropOverride::NoOverride;
    GadgetDropOverride = EAthenaLootDropOverride::NoOverride;
    ConsumableDropOverride = EAthenaLootDropOverride::NoOverride;
    AmmoDropOverride = EAthenaLootDropOverride::NoOverride;
    InventoryUpdateOverride = EAthenaInventorySpawnOverride::NoOverride;
    InventoryLoadoutIndex = 0;
}

