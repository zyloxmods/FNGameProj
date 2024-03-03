#include "FortItemQuantityListBase.h"

void UFortItemQuantityListBase::SetItemToCompareDefinitionsAndQuantities(const TArray<FFortItemQuantityPair>& ItemToCompareQuantityPairs) {
}

void UFortItemQuantityListBase::SetItemInstancesAndQuantities(const TArray<FFortItemInstanceQuantityPair>& ItemQuantityPairs, const bool ShouldResetWidgets) {
}

void UFortItemQuantityListBase::SetItemInspectMode(EFortItemInspectionMode InspectMode) {
}

void UFortItemQuantityListBase::SetItemDefinitionsAndQuantities(const TArray<FFortItemQuantityPair>& ItemQuantityPairs, const bool ShouldResetWidgets) {
}


bool UFortItemQuantityListBase::IsEmptyList() const {
    return false;
}

TArray<UFortItemDefinition*> UFortItemQuantityListBase::GetItemDefinitions() {
    return TArray<UFortItemDefinition*>();
}


UFortItemQuantityListBase::UFortItemQuantityListBase() {
    this->CurrentInspectMode = EFortItemInspectionMode::Overview;
    this->bListenToInventoryChanges = false;
    this->ListEntryWidgetType = NULL;
}

