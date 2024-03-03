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
    this->SlotSize = 1;
    this->SlotType = EComboSlotType::Primary;
    this->SlotIndex = 0;
    this->PrimarySlot = NULL;
    this->SecondarySlot = NULL;
    this->CreativeSlot = NULL;
}

