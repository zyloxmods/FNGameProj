#include "FortCollectionBookPageDetailsWidget.h"

void UFortCollectionBookPageDetailsWidget::OnUnslotItemComplete(const UFortAccountItem* SlottedItem, const UFortAccountItem* OldItem, FName SlotId) {
}

void UFortCollectionBookPageDetailsWidget::OnSlotItemComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}

void UFortCollectionBookPageDetailsWidget::OnPageProgressionUpdated_Implementation(int32 TotalFilledSlots, int32 TotalSlots, EFortCollectionBookState State) {
}

void UFortCollectionBookPageDetailsWidget::OnDetailsPageChanged_Implementation(const UFortCollectionBookPage* InNewDetailsPage) {
}

void UFortCollectionBookPageDetailsWidget::HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

UFortCollectionBookPageDetailsWidget::UFortCollectionBookPageDetailsWidget() {
    this->PageCompletionText = NULL;
    this->ProgressBar = NULL;
    this->PageRewardWidget = NULL;
    this->RewardDetailsButton = NULL;
    this->DetailsPage = NULL;
    this->RewardDetailsModalWidget = NULL;
}

