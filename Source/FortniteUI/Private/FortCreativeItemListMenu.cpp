#include "FortCreativeItemListMenu.h"
#include "Templates/SubclassOf.h"

void UFortCreativeItemListMenu::SpawnContainer(TSubclassOf<AActor> SupplyDropClass) {
}

void UFortCreativeItemListMenu::SetSubTabOpened(bool bIsOpened) {
}

void UFortCreativeItemListMenu::SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled) {
}

void UFortCreativeItemListMenu::RefreshChestWidgetState() {
}

bool UFortCreativeItemListMenu::PlaceSelectionInMoveTool() {
    return false;
}

bool UFortCreativeItemListMenu::OpenSelection() {
    return false;
}




void UFortCreativeItemListMenu::LoadItems() {
}

bool UFortCreativeItemListMenu::IsSubTabOpened() const {
    return false;
}

void UFortCreativeItemListMenu::InitializeTabs() {
}

void UFortCreativeItemListMenu::HandleTabSelected(FName TabId) {
}

void UFortCreativeItemListMenu::HandleQuickbarPanelIsFocused(bool bIsFocused) {
}

void UFortCreativeItemListMenu::HandleItemSelectionChanged(const FFortItemEntry& ItemToSpawn, UFortCreativeItemListTabPanel* Tab) {
}

void UFortCreativeItemListMenu::HandleFilterPanelIsFocused(bool bIsFocused) {
}

void UFortCreativeItemListMenu::HandleFilterChanged() {
}

void UFortCreativeItemListMenu::HandleEquipItem(const FFortItemEntry& ItemEntry) {
}

void UFortCreativeItemListMenu::HandleChestItemCountChanged(int32 Count) {
}

void UFortCreativeItemListMenu::HandleAddSelectionToMoveToolComplete() {
}

UFortCreativeItemListTabPanel* UFortCreativeItemListMenu::GetCurrentTab() const {
    return NULL;
}

FFortItemEntry UFortCreativeItemListMenu::GetCurrentSelection() const {
    return FFortItemEntry{};
}

bool UFortCreativeItemListMenu::ExecuteDefaultActionOnSelection() {
    return false;
}

bool UFortCreativeItemListMenu::EquipSelection() {
    return false;
}

bool UFortCreativeItemListMenu::EquipItem(const FFortItemEntry& ItemEntry) {
    return false;
}

bool UFortCreativeItemListMenu::CanPlayerCreateInVolume(const UObject* WorldContextObject) const {
    return false;
}

bool UFortCreativeItemListMenu::CanEquip(const FFortItemEntry& SelectedItem) const {
    return false;
}

bool UFortCreativeItemListMenu::CanAddToChest(const FFortItemEntry& SelectedItem) const {
    return false;
}

void UFortCreativeItemListMenu::BroadcastOnItemEquipped(FFortItemEntry ItemToSpawn) {
}

void UFortCreativeItemListMenu::BroadcastOnCloseFromContentBrowser() {
}

bool UFortCreativeItemListMenu::AddSelectionToQuickBar() {
    return false;
}

UFortCreativeItemListMenu::UFortCreativeItemListMenu() {
    this->PanelDataClass = NULL;
    this->ItemListSource = NULL;
    this->ItemListCategorySource = NULL;
    this->ItemListPanelData = NULL;
    this->InventoryTabClass = NULL;
    this->InventoryTabButton = NULL;
    this->TabList_Categories = NULL;
    this->ChestTabPanel = NULL;
    this->SubItemsTabPanel = NULL;
    this->Switcher_Categories = NULL;
    this->Switcher_NoItemInChest = NULL;
    this->Switcher_CommandBar = NULL;
    this->MenuQuickbar_QuickBars = NULL;
    this->Button_ResetChest = NULL;
    this->Button_CreateChest = NULL;
    this->Button_AddToQuickBar = NULL;
    this->Button_OpenItem = NULL;
    this->Button_PlaceNow = NULL;
    this->Button_Equip = NULL;
    this->Button_AddToChest = NULL;
    this->Button_CreateLlama = NULL;
    this->Button_RemoveFromChest = NULL;
    this->FiltersPanel = NULL;
    this->LastUsedSlot = 0;
}

