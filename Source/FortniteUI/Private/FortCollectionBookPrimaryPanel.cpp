#include "FortCollectionBookPrimaryPanel.h"

void UFortCollectionBookPrimaryPanel::OnSummonInfoPanelExecuted_Implementation(bool& bPassThrough) {
}

void UFortCollectionBookPrimaryPanel::OnInputMethodChanged(ECommonInputType CurrentInputType) {
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookSectionClicked_Implementation(const UFortCollectionBookSection* ClickedSection) {
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageSelected_Implementation(const UFortCollectionBookPage* SelectedPage) {
}

void UFortCollectionBookPrimaryPanel::OnCollectionBookPageClicked_Implementation(const UFortCollectionBookPage* ClickedPage) {
}

void UFortCollectionBookPrimaryPanel::OnBackActionExecuted(bool& bPassThrough) {
}

UFortCollectionBookPrimaryPanel::UFortCollectionBookPrimaryPanel() {
    this->OverviewWidget = NULL;
    this->SectionTileViewWidget = NULL;
    this->CurrentNavTarget = ECollectionBookPrimaryNavTarget::Overview;
    this->LastClickedSection = NULL;
}

