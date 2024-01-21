#include "FortItemDetailsHostPanel.h"

void UFortItemDetailsHostPanel::ShouldPreviewUpgradingItem(const bool Value) {
}

void UFortItemDetailsHostPanel::SetScrollWidget() {
}

void UFortItemDetailsHostPanel::SetQuantityOverride(const int32 NewQuantityOverride) {
}

void UFortItemDetailsHostPanel::SetItemViewContext(const TScriptInterface<IFortItemViewContextInterface>& NewItemViewContext) {
}

void UFortItemDetailsHostPanel::SetItemToDetail(const UFortItem* NewItemToDetail) {
}

void UFortItemDetailsHostPanel::SetItemToCompareWith(const UFortItem* NewItemToCompareWith) {
}

void UFortItemDetailsHostPanel::SetInspectMode(EFortItemInspectionMode InspectMode) {
}




void UFortItemDetailsHostPanel::HandleItemToDetailTooltipAssetsLoaded() {
}


void UFortItemDetailsHostPanel::HandleItemToCompareTooltipAssetsLoaded() {
}




UFortItemDetailsHostPanel::UFortItemDetailsHostPanel() {
    this->bShouldPreviewUpgradingItem = false;
    this->ScrollBox = NULL;
    this->DetailsContainerSlotWidget = NULL;
    this->HighRarityBorder = NULL;
    this->CurrentInspectMode = EFortItemInspectionMode::Overview;
    this->QuantityOverride = -1;
    this->ItemToDetailLoadingWrapper = NULL;
    this->ItemToCompareLoadingWrapper = NULL;
    this->ItemToDetailLoadGuard = NULL;
    this->ItemToCompareLoadGuard = NULL;
}

