#include "FortItemDetailsHostPanel.h"

void UFortItemDetailsHostPanel::ShouldPreviewUpgradingItem(const bool Value) {
}

void UFortItemDetailsHostPanel::SetUpgradeLevelDelta(const int32 InDelta) {
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

void UFortItemDetailsHostPanel::SetIsUpdatingSuspended(const bool bValue) {
}

void UFortItemDetailsHostPanel::SetInspectMode(EFortItemInspectionMode InspectMode) {
}





void UFortItemDetailsHostPanel::HandleItemToDetailTooltipAssetsLoaded() {
}


void UFortItemDetailsHostPanel::HandleItemToCompareTooltipAssetsLoaded() {
}

void UFortItemDetailsHostPanel::HandleItemRefundComplete(const bool bWasSuccessful, const FString& ConvertedItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemsQuantities) {
}

void UFortItemDetailsHostPanel::HandleItemRarityUpgradeComplete(const bool bWasSuccessful, const FString& ConvertedItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemsQuantities) {
}

void UFortItemDetailsHostPanel::HandleItemEvolutionComplete(const bool bWasSuccessful, const FString& ConvertedItemInstanceId, const TArray<FFortItemInstanceQuantityPair>& ItemsQuantities) {
}




UFortItemDetailsHostPanel::UFortItemDetailsHostPanel() {
    this->bShouldPreviewUpgradingItem = false;
    this->UpgradeLevelDelta = 0;
    this->ScrollBox = NULL;
    this->DetailsContainerSlotWidget = NULL;
    this->HighRarityBorder = NULL;
    this->CurrentInspectMode = EFortItemInspectionMode::Overview;
    this->QuantityOverride = 0;
    this->ItemToDetailLoadingWrapper = NULL;
    this->ItemToCompareLoadingWrapper = NULL;
    this->ItemToDetailLoadGuard = NULL;
    this->ItemToCompareLoadGuard = NULL;
    this->bAsyncLoadTooltipData = true;
    this->bIsUpdatingSuspended = false;
}

