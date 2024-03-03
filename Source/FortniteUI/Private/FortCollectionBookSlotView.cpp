#include "FortCollectionBookSlotView.h"

void UFortCollectionBookSlotView::OnSlotButtonHovered(UCommonButton* HoveredButton, int32 ButtonIdx) {
}

void UFortCollectionBookSlotView::OnSlotButtonClicked(UCommonButton* ClickedButton, int32 ButtonIdx) {
}

void UFortCollectionBookSlotView::OnSelectedSlotButtonChanged(UCommonButton* SelectedButton, int32 ButtonIdx) {
}

UFortCollectionBookSlotView::UFortCollectionBookSlotView() {
    this->CollectionBookButtonBox = NULL;
    this->CollectionBookSlotButtonGroup = NULL;
    this->AssociatedSection = NULL;
    this->PreviousSelectedButtonIdx = 0;
    this->CurrentSelectedButtonIdx = 0;
}

