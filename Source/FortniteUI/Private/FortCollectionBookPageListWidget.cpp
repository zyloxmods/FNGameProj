#include "FortCollectionBookPageListWidget.h"



void UFortCollectionBookPageListWidget::OnSlottedItemOperationComplete(const UFortAccountItem* SlottedItem, FName SlotId) {
}



UFortCollectionBookPageListWidget::UFortCollectionBookPageListWidget() {
    this->PageNameWidget = NULL;
    this->AvailableSlotsWidget = NULL;
    this->PageCompletionWidget = NULL;
    this->bIsExpanded = false;
}

