#include "FortCreativeItemListMenu.h"


void UFortCreativeItemListMenu::LoadItems() {
}

FName UFortCreativeItemListMenu::GetTabNameFromLabel(const FText& TabLabel) const {
    return NAME_None;
}

bool UFortCreativeItemListMenu::GetCollapseBorderPadFlagForCategory(const FName& ItemListCategoryName) const {
    return false;
}

EFortItemCardSize UFortCreativeItemListMenu::GetCardSizeForCategory(const FName& ItemListCategoryName) const {
    return EFortItemCardSize::XXS;
}

bool UFortCreativeItemListMenu::CanPlayerCreateInVolume(const UObject* WorldContextObject) const {
    return false;
}

void UFortCreativeItemListMenu::BroadcastOnItemSelected(FFortItemEntry ItemToSpawn) {
}

UFortCreativeItemListMenu::UFortCreativeItemListMenu() {
    this->PanelDataClass = NULL;
    this->ItemListSource = NULL;
    this->ItemListCategorySource = NULL;
    this->ItemListPanelData = NULL;
}

