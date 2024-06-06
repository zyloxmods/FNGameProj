#include "FortCollectionBookData.h"

void UFortCollectionBookData::GetPageIdsFromCategoryId(FName CategoryId, TArray<FName>& PageIds) const {
}

UFortCollectionBookData::UFortCollectionBookData() {
    PageCategoryData = NULL;
    PageData = NULL;
    SectionData = NULL;
    SlotData = NULL;
    SlotSourceData = NULL;
    XPWeightData = NULL;
    SlotRarityFactorData = NULL;
    BookXPData = NULL;
}

