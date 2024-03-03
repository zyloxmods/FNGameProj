#include "FortItemManagementScreen.h"

void UFortItemManagementScreen::TransferItem(UFortItem* Item) {
}

void UFortItemManagementScreen::ToggleShowRefundIndicator() {
}

void UFortItemManagementScreen::ToggleShowCollectionBookIndicator() {
}


void UFortItemManagementScreen::ShowMulchConfirmationModal() {
}

void UFortItemManagementScreen::ShowCustomFilterModal() {
}

void UFortItemManagementScreen::SetFrontendInventoryFilter(EFortFrontendInventoryFilter NewFrontendInventoryFilter) {
}

void UFortItemManagementScreen::SetConsumeItemRequestInProgress(bool InProgress) {
}

void UFortItemManagementScreen::RequestPopupMenuForSelectedItem() {
}

void UFortItemManagementScreen::OpenCraftingOptions(UFortSchematicItem* SchematicItem) {
}

void UFortItemManagementScreen::OpenAutoMulchOptions() {
}

void UFortItemManagementScreen::NotifyPanelDeactivated() {
}

void UFortItemManagementScreen::NotifyPanelActivated() {
}

void UFortItemManagementScreen::MarkAllItemsAsSeen() {
}

bool UFortItemManagementScreen::IsScreenWIFE() const {
    return false;
}

void UFortItemManagementScreen::InspectItem(UFortItem* Item) {
}

void UFortItemManagementScreen::HideMulchConfirmationModal() {
}

void UFortItemManagementScreen::HideCustomFilterModal() {
}

bool UFortItemManagementScreen::HasItemBeenSeen(UFortAccountItem* AccountItem) const {
    return false;
}

bool UFortItemManagementScreen::HasDefaultItemsToMulch() const {
    return false;
}





void UFortItemManagementScreen::HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}

void UFortItemManagementScreen::HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged) {
}








bool UFortItemManagementScreen::GuardActionForReadOnlyWIFE() {
    return false;
}

bool UFortItemManagementScreen::GetShouldShowRefundIndicator() const {
    return false;
}

bool UFortItemManagementScreen::GetShouldShowCollectionBookIndicator() const {
    return false;
}

UFortItem* UFortItemManagementScreen::GetItemToDetail() const {
    return NULL;
}

UFortItem* UFortItemManagementScreen::GetItemToCompareDetailsWith() const {
    return NULL;
}

void UFortItemManagementScreen::EquipItem(UFortItem* Item) {
}

void UFortItemManagementScreen::EnterMulchModeForAutoMulch() {
}

void UFortItemManagementScreen::EnterMulchMode(UFortItem* ItemToMulch) {
}

void UFortItemManagementScreen::EnterDetailsMode(UFortItem* NewItemToDetail) {
}

void UFortItemManagementScreen::EnterComparisonMode(UFortItem* ItemToCompareDetailsWith) {
}

void UFortItemManagementScreen::DropItem(UFortItem* Item) {
}

void UFortItemManagementScreen::CycleSortType() {
}

void UFortItemManagementScreen::CraftItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount) {
}

void UFortItemManagementScreen::CraftAndSlotItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32 CraftCount) {
}

void UFortItemManagementScreen::ConsumeItem(UFortConsumableAccountItem* ConsumableItem) {
}

bool UFortItemManagementScreen::CanRequestPopupMenuForSelectedItem() {
    return false;
}

bool UFortItemManagementScreen::CanEquipItem(UFortItem* Item) const {
    return false;
}

void UFortItemManagementScreen::CancelInventoryPanelTileViewRefresh() {
}

UFortItemManagementScreen::UFortItemManagementScreen() {
    this->Mode = EFortItemManagementMode::Details;
    this->FrontendInventoryFilter = EFortFrontendInventoryFilter::Schematics;
    this->bReadOnlyModeWIFE = false;
    this->ConsumeItemRequestInProgress = false;
    this->InventoryPanel = NULL;
    this->ModeDetailsPanel = NULL;
    this->MulchConfirmationModalClass = NULL;
    this->CustomFilterModalClass = NULL;
    this->MulchConfirmationModal = NULL;
    this->CustomFilterModal = NULL;
    this->InventoryContext = NULL;
}

