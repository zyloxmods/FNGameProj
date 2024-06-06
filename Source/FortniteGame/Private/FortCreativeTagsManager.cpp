#include "FortCreativeTagsManager.h"

TArray<FText> UFortCreativeTagsManager::GetCreativeTagsForItem(UFortItemDefinition* ItemDefinition) {
    return TArray<FText>();
}

UFortCreativeTagsManager::UFortCreativeTagsManager() {
    CreativeTagsTable = NULL;
    CreativeTagCategoriesTable = NULL;
}

