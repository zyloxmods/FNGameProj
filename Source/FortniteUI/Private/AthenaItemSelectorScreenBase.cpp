#include "AthenaItemSelectorScreenBase.h"

void UAthenaItemSelectorScreenBase::StartItemCustomization(EAthenaCustomizationCategory InCategory, int32 InSubslotIndex, const FText& CategoryDisplayName, const FText& ItemDisplayTypeName) {
}

void UAthenaItemSelectorScreenBase::SaveAndExit_ApplyToAllSlots() {
}

void UAthenaItemSelectorScreenBase::SaveAndExit(bool bApplyToAllSlots) {
}

void UAthenaItemSelectorScreenBase::OnVariantSelectionChanged(const FMcpVariantChannelInfo& InVariant) {
}



void UAthenaItemSelectorScreenBase::OnItemSelectionCommited(UFortItem* SelectedItem) {
}

void UAthenaItemSelectorScreenBase::OnItemSelectedChanged(UFortItem* SelectedItem) {
}




void UAthenaItemSelectorScreenBase::HandleSelectedTabChanged(FName SelectedTabID) {
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
    this->CurrentPreviewItem = NULL;
    this->CurrentPreviewItemDef = NULL;
    this->Picker_VariantSelector = NULL;
    this->CustomizeCategory = EAthenaCustomizationCategory::None;
    this->SubslotIndex = 0;
}

