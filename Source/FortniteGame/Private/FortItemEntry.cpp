#include "FortItemEntry.h"

FFortItemEntry::FFortItemEntry() {
    Count = 0;
    PreviousCount = 0;
    ItemDefinition = NULL;
    OrderIndex = 0;
    Durability = 1;
    Level = 0;
    LoadedAmmo = 0;
    PhantomReserveAmmo = 0;
    ControlOverride = 0;
    inventory_overflow_date = false;
    bWasGifted = false;
    bIsReplicatedCopy = false;
    bIsDirty = false;
    bUpdateStatsOnCollection = false;
    PickupVariantIndex = 0;
    ItemVariantDataMappingIndex = 0;
}

