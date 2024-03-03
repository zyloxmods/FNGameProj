#include "AthenaItemSelectorScreenBase.h"

void UAthenaItemSelectorScreenBase::StartItemCustomization(const FAthenaCustomizationParams& Params) {
}

void UAthenaItemSelectorScreenBase::SaveAndExit_ApplyToAllSlots() {
}

void UAthenaItemSelectorScreenBase::SaveAndExit(bool bApplyToAllSlots) {
}





void UAthenaItemSelectorScreenBase::OnItemSelectionCommited(UFortItem* SelectedItem) {
}

void UAthenaItemSelectorScreenBase::OnItemSelectedChanged(UFortItem* SelectedItem) {
}





bool UAthenaItemSelectorScreenBase::IsItemOwned(const UFortItem* Item) const {
    return false;
}

void UAthenaItemSelectorScreenBase::IsInTextSearchChanged(bool bEnteredTextSearch) {
}

void UAthenaItemSelectorScreenBase::HandleSearchTextChanged(const FText& NewText) {
}

void UAthenaItemSelectorScreenBase::HandleScreenAnalytics(bool bItemChanged) {
}

UFortItem* UAthenaItemSelectorScreenBase::GetCurrentItem() const {
    return NULL;
}

void UAthenaItemSelectorScreenBase::ExitEditStyle() {
}

void UAthenaItemSelectorScreenBase::EnterEditStyle() {
}

UAthenaItemSelectorScreenBase::UAthenaItemSelectorScreenBase() {
    this->TabButtonType = NULL;
    this->Button_ConfirmSelection = NULL;
    this->Button_EditStyle = NULL;
    this->Button_ConfirmStyle = NULL;
    this->Picker_ItemSelector = NULL;
    this->ItemInfo = NULL;
    this->Item_HeaderInfo = NULL;
    this->bVariantZoomUsesSnap = false;
    this->CurrentPreviewItem = NULL;
    this->CurrentPreviewItemDef = NULL;
    this->Picker_VariantSelector = NULL;
    this->UnlockingInfo = NULL;
    this->CustomizeCategory = EAthenaCustomizationCategory::None;
    this->SubslotIndex = 0;
}

