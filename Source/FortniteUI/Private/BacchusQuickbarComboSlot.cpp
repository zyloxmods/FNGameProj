#include "BacchusQuickbarComboSlot.h"

void UBacchusQuickbarComboSlot::SetSize_Implementation(float NewButtonSize) {
}

void UBacchusQuickbarComboSlot::SetQuickbarType(int32 NewType) {
}

void UBacchusQuickbarComboSlot::Refresh_Implementation() {
}

EFortQuickBars UBacchusQuickbarComboSlot::GetQuickbarType() const {
    return EFortQuickBars::Primary;
}

UBacchusQuickbarComboSlot::UBacchusQuickbarComboSlot() {
    this->SlotSize = 92.00f;
    this->SlotType = EComboSlotType::Combo;
    this->SlotIndex = 0;
}

