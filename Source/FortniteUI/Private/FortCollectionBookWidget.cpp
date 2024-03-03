#include "FortCollectionBookWidget.h"

void UFortCollectionBookWidget::RequestToClose() {
}

void UFortCollectionBookWidget::OnPreviewXPChangeRequest(int32 XPChange) {
}

void UFortCollectionBookWidget::OnCollectionBookSectionCloseRequest() {
}

void UFortCollectionBookWidget::OnCollectionBookSectionClicked_Implementation(const UFortCollectionBookSection* ClickedSection) {
}

void UFortCollectionBookWidget::OnCollectionBookPageSelected_Implementation(const UFortCollectionBookPage* SelectedPage) {
}

void UFortCollectionBookWidget::OnCollectionBookPageClicked_Implementation(const UFortCollectionBookPage* ClickedPage) {
}

UFortCollectionBookWidget::UFortCollectionBookWidget() {
    this->ProgressWidget = NULL;
    this->MainWidgetSwitcher = NULL;
    this->PrimaryPanelWidget = NULL;
    this->SectionPanelWidget = NULL;
    this->PrimaryPanelIdx = 0;
    this->SectionPanelIdx = 0;
}

