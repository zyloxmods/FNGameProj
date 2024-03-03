#include "FortCollectionBookData.h"

void UFortCollectionBookData::GetPageIdsFromCategoryId(FName CategoryId, TArray<FName>& PageIds) const {
}

UFortCollectionBookData::UFortCollectionBookData() {
    this->PageCategoryData = NULL;
    this->PageData = NULL;
    this->SectionData = NULL;
    this->SlotData = NULL;
    this->SlotSourceData = NULL;
    this->XPWeightData = NULL;
    this->SlotRarityFactorData = NULL;
    this->BookXPData = NULL;
}

