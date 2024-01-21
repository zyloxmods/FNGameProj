#include "AthenaInventoryPanelBase.h"

void UAthenaInventoryPanelBase::SetBypassNotifications(bool bBypass) {
}



void UAthenaInventoryPanelBase::HandleInventoryItemSelected(UFortItem* Item) {
}


void UAthenaInventoryPanelBase::HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget) {
}

UFortItemTileView* UAthenaInventoryPanelBase::GetTileViewForItem(UFortItem* Item) {
    return NULL;
}

void UAthenaInventoryPanelBase::FocusTileView(UFortItemTileView* TileView) {
}

void UAthenaInventoryPanelBase::AttemptToUpdateFocus() {
}

void UAthenaInventoryPanelBase::AdvanceSelection(UFortItemTileView* TileView) {
}

UAthenaInventoryPanelBase::UAthenaInventoryPanelBase() {
    this->ResourceView = NULL;
    this->AmmoView = NULL;
    this->EquipButtonGroup = NULL;
}

