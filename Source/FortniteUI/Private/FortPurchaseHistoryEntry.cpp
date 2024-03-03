#include "FortPurchaseHistoryEntry.h"





UFortPurchaseHistoryEntry::UFortPurchaseHistoryEntry() {
    this->ItemCardClass = NULL;
    this->CardWidthOverride = 1;
    this->Text_Name = NULL;
    this->LootEntryItemTypesToExclude.AddDefaulted(1);
}

