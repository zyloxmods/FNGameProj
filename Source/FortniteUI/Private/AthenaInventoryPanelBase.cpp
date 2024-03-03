#include "AthenaInventoryPanelBase.h"

void UAthenaInventoryPanelBase::SetBypassNotifications(bool bBypass) {
}



void UAthenaInventoryPanelBase::HandleInventoryItemSelected(UFortItem* Item) {
}

UFortItemTileView* UAthenaInventoryPanelBase::GetTileViewForItem(UFortItem* Item) {
    return NULL;
}

UUserWidget* UAthenaInventoryPanelBase::GetMyIslandWidget() {
    return NULL;
}

UUserWidget* UAthenaInventoryPanelBase::GetCreativeInventoryWidget() {
    return NULL;
}

void UAthenaInventoryPanelBase::FocusTileView(UFortItemTileView* TileView) {
}

void UAthenaInventoryPanelBase::AttemptToUpdateFocus() {
}

void UAthenaInventoryPanelBase::AdvanceSelection(UFortItemTileView* TileView) {
}

UAthenaInventoryPanelBase::UAthenaInventoryPanelBase() {
    this->CachedLastFocusView = NULL;
    this->CachedLastFocusItem = NULL;
    this->TabButtonClass = NULL;
    this->ItemListPanelDataClass = NULL;
    this->ResourceView = NULL;
    this->AmmoView = NULL;
    this->QuickbarEditor = NULL;
    this->ScaleBox_Leto = NULL;
    this->TabList_Inventory = NULL;
    this->Switcher_InventoryTabs = NULL;
    this->Panel_Inventory = NULL;
    this->SwitcherIndex_Inventory = 0;
    this->Panel_MyIslandHost = NULL;
    this->SwitcherIndex_MyIsland = 0;
    this->MyIslandWidget = NULL;
    this->Panel_CreativeInventoryHost = NULL;
    this->SwitcherIndex_CreativeInventory = 0;
    this->CreativeInventoryWidget = NULL;
}

