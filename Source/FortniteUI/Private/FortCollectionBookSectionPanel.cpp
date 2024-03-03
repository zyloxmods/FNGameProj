#include "FortCollectionBookSectionPanel.h"

void UFortCollectionBookSectionPanel::OnUnslotItemOperationComplete(const UFortAccountItem* UnslottedItem, const UFortAccountItem* OldSlottedItem, FName SlotId) {
}


void UFortCollectionBookSectionPanel::OnUnslotItemActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnSlottedItemOperationComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}

void UFortCollectionBookSectionPanel::OnSlotPickerItemSelected(UFortItem* SelectedItem) {
}

void UFortCollectionBookSectionPanel::OnSlotPickerItemHovered(UFortItem* HoveredItem) {
}

void UFortCollectionBookSectionPanel::OnSlotItemConfirmationCompleted(UFortItem* SelectedItem, FName SlotId, FFortDialogExternalLatentActionHandle LatentActionHandle) {
}

void UFortCollectionBookSectionPanel::OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}

void UFortCollectionBookSectionPanel::OnSlotItemActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnSlotButtonSelected(const UFortCollectionBookSlotButton* SlotButton) {
}

void UFortCollectionBookSectionPanel::OnSlotButtonHovered(int32 ButtonIx) {
}

void UFortCollectionBookSectionPanel::OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction) {
}

void UFortCollectionBookSectionPanel::OnSectionChanged_Implementation(const UFortCollectionBookSection* Section) {
}

void UFortCollectionBookSectionPanel::OnResearchItemOperationComplete(const UFortAccountItem* NewItem, const FString& TemplateId) {
}

void UFortCollectionBookSectionPanel::OnPurchaseItemActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnOpenPickerActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnLogAllowedItemsActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnInspectActionExecuted(bool& bPassThrough) {
}

void UFortCollectionBookSectionPanel::OnBackActionExecuted(bool& bPassThrough) {
}

UFortCollectionBookSectionPanel::UFortCollectionBookSectionPanel() {
    this->SectionNameTextWidget = NULL;
    this->SlotViewWidget = NULL;
    this->SlotItemPicker = NULL;
    this->ContextOverlayWidget = NULL;
    this->ContextTextWidget = NULL;
    this->SectionRewardWidget = NULL;
    this->ItemAcquisitionSourceContainerWidget = NULL;
    this->ItemAcquisitionSourceDescWidget = NULL;
    this->ItemAcquisitionSourceDesc2Widget = NULL;
    this->ResearchRecruitUnslotContainerWidget = NULL;
    this->PersonRecruitUnavailableMessageWidget = NULL;
    this->ItemResearchUnavailableMessageWidget = NULL;
    this->UnslotUnavailableMessageWidget = NULL;
    this->CurrentNavTarget = ECollectionBookSectionNavTarget::SlotSelect;
    this->AssociatedSection = NULL;
    this->bHasSummonedPanel = false;
}

