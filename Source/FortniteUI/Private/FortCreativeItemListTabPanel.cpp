#include "FortCreativeItemListTabPanel.h"


void UFortCreativeItemListTabPanel::RestoreLastSelection() {
}

void UFortCreativeItemListTabPanel::RemoveSelectedItem() {
}


bool UFortCreativeItemListTabPanel::IsEmpty() {
    return false;
}

int32 UFortCreativeItemListTabPanel::GetSelectedItemIndex() {
    return 0;
}

EFortCreativeItemType UFortCreativeItemListTabPanel::GetItemType() {
    return EFortCreativeItemType::Chest;
}

bool UFortCreativeItemListTabPanel::GetCollapseBorderPadFlagForCategory() const {
    return false;
}

EFortItemCardSize UFortCreativeItemListTabPanel::GetCardSizeForCategory() const {
    return EFortItemCardSize::XXS;
}


void UFortCreativeItemListTabPanel::ClearFilteredItems() {
}

void UFortCreativeItemListTabPanel::ClearAllItems() {
}

void UFortCreativeItemListTabPanel::AddItemToSource(FFortItemEntry& ItemToAdd) {
}

void UFortCreativeItemListTabPanel::AddItem(FFortItemEntry& ItemToAdd) {
}

UFortCreativeItemListTabPanel::UFortCreativeItemListTabPanel() {
    this->CreativeTileView_ItemOptions = NULL;
}

