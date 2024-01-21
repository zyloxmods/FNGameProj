#include "FortMulchConfirmationModalWidget.h"


void UFortMulchConfirmationModalWidget::UpdateConfirmationModal() {
}

TMap<EItemRecyclingWarning, int32> UFortMulchConfirmationModalWidget::GetMulchWarnings() {
    return TMap<EItemRecyclingWarning, int32>();
}

void UFortMulchConfirmationModalWidget::CommitMulch() {
}

UFortMulchConfirmationModalWidget::UFortMulchConfirmationModalWidget() {
    this->RecycleItemTileView = NULL;
    this->RecycleDetailsPanel = NULL;
    this->InventoryContext = NULL;
}

