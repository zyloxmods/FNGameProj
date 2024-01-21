#include "AthenaCreativeItemTileButton.h"



UAthenaCreativeItemEntryObjectWrapper* UAthenaCreativeItemTileButton::MakeFortItemEntryObjectWrapper(UObject* Target, FFortItemEntry& InItemEntry) {
    return NULL;
}

int32 UAthenaCreativeItemTileButton::GetItemTypeCount() {
    return 0;
}

bool UAthenaCreativeItemTileButton::CompareToItemEntry(const FFortItemEntry& InItemEntry) {
    return false;
}

UAthenaCreativeItemTileButton::UAthenaCreativeItemTileButton() {
    this->ParentView = NULL;
    this->ItemDefinition = NULL;
}

