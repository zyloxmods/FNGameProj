#include "AthenaCustomizationScreen.h"

void UAthenaCustomizationScreen::ShowLockerSlot(EAthenaCustomizationCategory CustomizationCategory, int32 SlotIndex, bool bCanShowEmpty) {
}

void UAthenaCustomizationScreen::ShiftItemsVariantOption(UAthenaCosmeticAccountItem* Item, int32 VariantChannelIndex) {
}

void UAthenaCustomizationScreen::SetCustomizationSelectionBeingProcessed(bool bIsBeingProcessed) {
}


FText UAthenaCustomizationScreen::GetItemTypeDisplayNames(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UFortItem* UAthenaCustomizationScreen::GetFavoriteItemForCategory(EAthenaCustomizationCategory CustomizationType, int32 SubslotIndex) {
    return NULL;
}

FText UAthenaCustomizationScreen::GetCategoryDisplayName(EAthenaCustomizationCategory InCategory) {
    return FText::GetEmpty();
}

UAthenaCustomizationScreen::UAthenaCustomizationScreen() {
    this->bCustomizationSelectionBeingProcessed = false;
    this->InitialCustomizationCategory = EAthenaCustomizationCategory::None;
    this->ItemSelectorScreenClass = NULL;
    this->ItemSelectorScreen = NULL;
    this->BoundAnim_Intro = NULL;
    this->BoundAnim_Outro = NULL;
    this->LoadoutSelector = NULL;
}

