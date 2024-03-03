#include "FortCollectionBookOverviewWidget.h"

void UFortCollectionBookOverviewWidget::OnDeactivated_Implementation() {
}

void UFortCollectionBookOverviewWidget::OnActivated_Implementation() {
}

void UFortCollectionBookOverviewWidget::HandlePagesChanged(UFortCollectionBookManager* CBManager) {
}

UFortCollectionBookOverviewWidget::UFortCollectionBookOverviewWidget() {
    this->LastSelectedPage = NULL;
    this->LastSelectedCategory = NULL;
    this->PageTreeViewWidget = NULL;
}

