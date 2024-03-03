#include "SpawnItemVariantParams.h"

FSpawnItemVariantParams::FSpawnItemVariantParams() {
    this->WorldItemDefinition = NULL;
    this->NumberToSpawn = 0;
    this->OverrideMaxStackCount = 0;
    this->bToss = false;
    this->bRandomRotation = false;
    this->bBlockedFromAutoPickup = false;
    this->PickupInstigatorHandle = 0;
    this->SourceType = EFortPickupSourceTypeFlag::Other;
    this->Source = EFortPickupSpawnSource::Unset;
    this->OptionalOwnerPC = NULL;
    this->bPickupOnlyRelevantToOwner = false;
}

