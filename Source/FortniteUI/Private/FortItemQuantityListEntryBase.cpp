#include "FortItemQuantityListEntryBase.h"

void UFortItemQuantityListEntryBase::SetPreviewData(const FFortItemEntryPreviewData& PreviewData) {
}

void UFortItemQuantityListEntryBase::SetItemInstanceAndQuantity(const FFortItemInstanceQuantityPair& ItemQuantityPair, const bool ShouldTreatAsReset) {
}

void UFortItemQuantityListEntryBase::SetItemDefinitionAndQuantity(const FFortItemQuantityPair& ItemQuantityPair, const bool ShouldTreatAsReset) {
}




bool UFortItemQuantityListEntryBase::IsBeingPreviewed() const {
    return false;
}


void UFortItemQuantityListEntryBase::GetPreviewData(FFortItemEntryPreviewData& OutPreviewData) const {
}

UFortItem* UFortItemQuantityListEntryBase::GetItemInstance() const {
    return NULL;
}

UFortItemDefinition* UFortItemQuantityListEntryBase::GetItemDefinition() const {
    return NULL;
}

void UFortItemQuantityListEntryBase::ClearPreviewData() {
}

UFortItemQuantityListEntryBase::UFortItemQuantityListEntryBase() {
    this->Quantity = 0;
}

