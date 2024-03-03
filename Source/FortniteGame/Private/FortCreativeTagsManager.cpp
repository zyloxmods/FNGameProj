#include "FortCreativeTagsManager.h"

TArray<FText> UFortCreativeTagsManager::GetCreativeTagsForItem(UFortItemDefinition* ItemDefinition) {
    return TArray<FText>();
}

UFortCreativeTagsManager::UFortCreativeTagsManager() {
    this->CreativeTagsTable = NULL;
    this->CreativeTagCategoriesTable = NULL;
}

