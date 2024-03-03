#include "BacchusQuickbar.h"

void UBacchusQuickbar::Refresh_Implementation() {
}


void UBacchusQuickbar::OnModeChanged(EFortQuickBars NewQuickbar, const int32 FocusedSlot) {
}

UBacchusQuickbar::UBacchusQuickbar() {
    this->SlotSize = 1;
    this->SlotType = EComboSlotType::Primary;
    this->bIsBackwards = false;
    this->BacchusQuickbarPrimary = NULL;
    this->BacchusQuickbarSecondary = NULL;
    this->BacchusQuickbarCreative = NULL;
    this->BarSwitcher = NULL;
}

