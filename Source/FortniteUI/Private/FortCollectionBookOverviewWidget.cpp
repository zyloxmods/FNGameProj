#include "FortCollectionBookOverviewWidget.h"

void UFortCollectionBookOverviewWidget::OnDeactivated_Implementation() {
}

void UFortCollectionBookOverviewWidget::OnActivated_Implementation() {
}

UFortCollectionBookOverviewWidget::UFortCollectionBookOverviewWidget() {
    this->LastSelectedPage = NULL;
    this->LastSelectedCategory = NULL;
    this->PageTreeViewWidget = NULL;
}

