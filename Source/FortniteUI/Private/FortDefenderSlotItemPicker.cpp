#include "FortDefenderSlotItemPicker.h"

void UFortDefenderSlotItemPicker::SetSortType(EInventoryContentSortType SortType) {
}

void UFortDefenderSlotItemPicker::PopulateDefenderSlotItems(const UFortDefenderItem* DefenderItem) {
}


void UFortDefenderSlotItemPicker::NextSortType() {
}

UFortDefenderSlotItemPicker::UFortDefenderSlotItemPicker() {
    this->DefenderSlotType = EFortDefenderSlotType::Invalid;
    this->CurrentSortType = EInventoryContentSortType::ByName;
}

