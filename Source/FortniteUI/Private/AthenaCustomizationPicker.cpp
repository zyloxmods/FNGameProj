#include "AthenaCustomizationPicker.h"

void UAthenaCustomizationPicker::SetFilter(const FName FilterName) {
}

void UAthenaCustomizationPicker::SearchText(const FText& Text) {
}

void UAthenaCustomizationPicker::RefreshView(bool CategoryChanging, bool FilterChanged, bool bSearchTextChanged) {
}




void UAthenaCustomizationPicker::HandleSelectedItemHasChanged(bool ItemChanged, bool AmmoChanged, bool IngredientsChanged) {
}

void UAthenaCustomizationPicker::HandleFilterTabSelected(FName TabNameID) {
}

void UAthenaCustomizationPicker::HandleFilterTabButtonCreated(FName TabNameID, UCommonButton* TabButton) {
}


FText UAthenaCustomizationPicker::GetQualifiedFilterDisplayName(EAthenaFilterDisplayType InTopFilterDisplaySetting) const {
    return FText::GetEmpty();
}

void UAthenaCustomizationPicker::EndCustomizationCategory() {
}

void UAthenaCustomizationPicker::BeginCustomizationCategory(EAthenaCustomizationCategory Category, int32 SubslotToEdit, bool bInAllowUnownedItems, bool bInOneItemPerSlot) {
}

UAthenaCustomizationPicker::UAthenaCustomizationPicker() {
    this->FilterTabButtonType = NULL;
    this->FilterTabButtonStyle = NULL;
    this->FilterTabList = NULL;
    this->CustomizeCategory = EAthenaCustomizationCategory::None;
    this->SubslotIndex = 0;
    this->bAllowUnownedItems = false;
    this->bAllowCommits = true;
    this->bOneItemPerSlot = false;
    this->ItemListeningTo = NULL;
    this->LocalCampaignHeroItem = NULL;
}

