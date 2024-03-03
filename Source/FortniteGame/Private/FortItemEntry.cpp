#include "FortItemEntry.h"

FFortItemEntry::FFortItemEntry() {
    this->Count = 0;
    this->PreviousCount = 0;
    this->ItemDefinition = NULL;
    this->OrderIndex = 0;
    this->Durability = 1;
    this->Level = 0;
    this->LoadedAmmo = 0;
    this->PhantomReserveAmmo = 0;
    this->ControlOverride = 0;
    this->inventory_overflow_date = false;
    this->bWasGifted = false;
    this->bIsReplicatedCopy = false;
    this->bIsDirty = false;
    this->bUpdateStatsOnCollection = false;
    this->PickupVariantIndex = 0;
    this->ItemVariantDataMappingIndex = 0;
}

