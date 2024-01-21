#include "AthenaCustomizationScreenBase.h"

void UAthenaCustomizationScreenBase::ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex) {
}


void UAthenaCustomizationScreenBase::HandleLoadoutChanged() {
}

void UAthenaCustomizationScreenBase::HandleInventoryUpdated(const TSet<FString>& ItemChangeFlags, int64 ProfileRevision) {
}

FText UAthenaCustomizationScreenBase::GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UFortItem* UAthenaCustomizationScreenBase::GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex) {
    return NULL;
}

FText UAthenaCustomizationScreenBase::GetCategoryDisplayName(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UAthenaCustomizationScreenBase::UAthenaCustomizationScreenBase() {
    this->LastProfileRev = 0;
}

