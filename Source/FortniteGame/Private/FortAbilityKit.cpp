#include "FortAbilityKit.h"

TArray<FText> UFortAbilityKit::GetDescription(const UObject* WorldContextObject, bool bFindSummaryTooltip) const {
    return TArray<FText>();
}

void UFortAbilityKit::BP_GetGadgets(TArray<UFortGadgetItemDefinition*>& GadgetItemDefinitions) {
}

UFortAbilityKit::UFortAbilityKit() {
    this->Tooltip = NULL;
    this->SummaryTooltip = NULL;
    this->StatList = NULL;
}

