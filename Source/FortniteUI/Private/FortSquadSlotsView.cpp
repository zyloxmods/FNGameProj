#include "FortSquadSlotsView.h"

bool UFortSquadSlotsView::TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const {
    return false;
}

bool UFortSquadSlotsView::TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes) {
    return false;
}

void UFortSquadSlotsView::SetIsSelectionLocked(const bool ShouldSelectionBeLocked) {
}

void UFortSquadSlotsView::SetInPreviewMode(const bool bPreview) {
}

void UFortSquadSlotsView::SetIdOfSquadToManageBP(const FName SquadId) {
}

void UFortSquadSlotsView::SelectSlot(int32 SquadSlotIndex) {
}

void UFortSquadSlotsView::HandleSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex) {
}

void UFortSquadSlotsView::HandleRequestViewInAll(int32 SquadSlotIndex) {
}

void UFortSquadSlotsView::HandleRequestOpenSquadSlot(int32 SquadSlotIndex) {
}

void UFortSquadSlotsView::HandleHoveredButtonChanged(UCommonButton* HoveredButton, int32 ButtonIndex) {
}

void UFortSquadSlotsView::HandleButtonDoubleClicked(UCommonButton* CommittedButton, int32 ButtonIndex) {
}

void UFortSquadSlotsView::HandleButtonClicked(UCommonButton* CommittedButton, int32 ButtonIndex) {
}

int32 UFortSquadSlotsView::GetIndexOfSelectedSquadSlot() const {
    return 0;
}

FName UFortSquadSlotsView::GetIdOfSquadToManageBP() const {
    return NAME_None;
}


UFortSquadSlotsView::UFortSquadSlotsView() {
    this->bReadOnlyModeWIFE = false;
    this->IndexOfSelectedSquadSlot = 0;
    this->bSlotButtonsRequireSelection = true;
    this->bInPreviewMode = false;
    this->DisableAutoSlottingToOpenSquadSlotPromptAction = NULL;
    this->SquadSlotButtonGroup = NULL;
}

