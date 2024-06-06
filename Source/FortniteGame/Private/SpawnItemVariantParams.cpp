#include "SpawnItemVariantParams.h"

FSpawnItemVariantParams::FSpawnItemVariantParams() {
    WorldItemDefinition = NULL;
    NumberToSpawn = 0;
    OverrideMaxStackCount = 0;
    bToss = false;
    bRandomRotation = false;
    bBlockedFromAutoPickup = false;
    PickupInstigatorHandle = 0;
    SourceType = EFortPickupSourceTypeFlag::Other;
    Source = EFortPickupSpawnSource::Unset;
    OptionalOwnerPC = NULL;
    bPickupOnlyRelevantToOwner = false;
}

