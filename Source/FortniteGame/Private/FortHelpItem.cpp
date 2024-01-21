#include "FortHelpItem.h"

TArray<UFortHelpItem*> UFortHelpItem::GetSubItems() {
    return TArray<UFortHelpItem*>();
}

UFortHelpItem* UFortHelpItem::GetItemWithID(const FName _ItemID) {
    return NULL;
}

UFortHelpItem::UFortHelpItem() {
    this->ItemType = EFortHelpItemType::Header;
}

