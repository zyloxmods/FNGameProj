#include "FortCollectionBookRecycleSlotResultsWidget.h"

void UFortCollectionBookRecycleSlotResultsWidget::SetCurrentItemToRecycle(UFortAccountItem* InItemToRecycle) {
}

UFortCollectionBookRecycleSlotResultsWidget::UFortCollectionBookRecycleSlotResultsWidget() {
    this->RecycleResultsWidget = NULL;
    this->ItemCardSize = EFortItemCardSize::XXS;
    this->ItemToRecycle = NULL;
}

