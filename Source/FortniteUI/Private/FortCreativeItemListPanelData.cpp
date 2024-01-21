#include "FortCreativeItemListPanelData.h"
#include "Templates/SubclassOf.h"

void UFortCreativeItemListPanelData::LoadItems(UObject* Target) {
}

FFortItemEntry UFortCreativeItemListPanelData::GetItemToSpawn(UFortItemDefinition* InItemDefinition) const {
    return FFortItemEntry{};
}

FText UFortCreativeItemListPanelData::GetInteractionText() const {
    return FText::GetEmpty();
}

UFortCreativeItemListPanelData* UFortCreativeItemListPanelData::GetCreativeItemListPanelData(UObject* Target, TSubclassOf<UFortCreativeItemListPanelData> PanelDataClass, UDataTable* InItemListSource, UDataTable* InItemListCategorySource) {
    return NULL;
}

UFortCreativeItemListPanelData::UFortCreativeItemListPanelData() {
    this->ItemListTable = NULL;
    this->ItemListCategoryTable = NULL;
}

