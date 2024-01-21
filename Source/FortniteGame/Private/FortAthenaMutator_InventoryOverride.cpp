#include "FortAthenaMutator_InventoryOverride.h"

AFortAthenaMutator_InventoryOverride::AFortAthenaMutator_InventoryOverride() {
    this->DropAllItemsOverride = EAthenaLootDropOverride::NoOverride;
    this->TrapDropOverride = EAthenaLootDropOverride::NoOverride;
    this->WeaponDropOverride = EAthenaLootDropOverride::NoOverride;
    this->MaterialDropOverride = EAthenaLootDropOverride::NoOverride;
    this->GadgetDropOverride = EAthenaLootDropOverride::NoOverride;
    this->ConsumableDropOverride = EAthenaLootDropOverride::NoOverride;
    this->AmmoDropOverride = EAthenaLootDropOverride::NoOverride;
    this->InventoryUpdateOverride = EAthenaInventorySpawnOverride::NoOverride;
    this->InventoryLoadoutIndex = -1;
}

