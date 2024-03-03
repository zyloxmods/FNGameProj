#include "FortExpeditionListViewWidget.h"

void UFortExpeditionListViewWidget::SetExpeditionListSortType(EFortExpeditionListSort InSortType) {
}

FText UFortExpeditionListViewWidget::GetExpeditionListSortName() const {
    return FText::GetEmpty();
}

UFortExpeditionListViewWidget::UFortExpeditionListViewWidget() {
    this->ExpeditionListView = NULL;
    this->SortType = EFortExpeditionListSort::ByRating;
}

