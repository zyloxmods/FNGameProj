#include "FortStoreSummary.h"

void UFortStoreSummary::ShowMulchConfirmationModal() {
}

void UFortStoreSummary::SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode) {
}

void UFortStoreSummary::SetCards(const TArray<FCard>& Cards) {
}

void UFortStoreSummary::NotifyPanelDeactivated() {
}

void UFortStoreSummary::NotifyPanelActivated() {
}

void UFortStoreSummary::MarkDefaultItemsForMulch() {
}

void UFortStoreSummary::HideMulchConfirmationModal() {
}


void UFortStoreSummary::HandleContextMenuOpenChanged(bool bIsOpen) {
}

bool UFortStoreSummary::GetIsInChoiceSelectionMode() const {
    return false;
}

void UFortStoreSummary::FinalizeFavoriteStatus() {
}


UFortStoreSummary::UFortStoreSummary() {
    this->TileView = NULL;
    this->MulchConfirmationModalClass = NULL;
    this->MulchConfirmationModal = NULL;
}

