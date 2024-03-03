#include "PerkSelectionEntryWidget.h"


void UPerkSelectionEntryWidget::OnSelectionMade() {
}

bool UPerkSelectionEntryWidget::GetTechSelectVerboseModeEnabled() const {
    return false;
}

UPerkSelectionEntryWidget::UPerkSelectionEntryWidget() {
    this->SelectionIndex = 0;
    this->ItemA = NULL;
    this->ItemB = NULL;
}

