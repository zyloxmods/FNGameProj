#include "FortItemEntry.h"

FFortItemEntry::FFortItemEntry() {
    this->Count = 0;
    this->PreviousCount = 0;
    this->ItemDefinition = NULL;
    this->Durability = 0.00f;
    this->Level = 0;
    this->LoadedAmmo = 0;
    this->inventory_overflow_date = false;
    this->bWasGifted = false;
    this->bIsReplicatedCopy = false;
    this->bIsDirty = false;
    this->bUpdateStatsOnCollection = false;
}

