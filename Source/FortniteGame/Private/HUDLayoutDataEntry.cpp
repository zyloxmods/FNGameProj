#include "HUDLayoutDataEntry.h"

FHUDLayoutDataEntry::FHUDLayoutDataEntry() {
    this->ZOrder = 0;
    this->BuildVisibility = EBacchusHUDStateType::DoNothing;
    this->CombatVisibility = EBacchusHUDStateType::DoNothing;
    this->EditVisibility = EBacchusHUDStateType::DoNothing;
    this->CreativeVisibility = EBacchusHUDStateType::DoNothing;
    this->Property_0 = 0.00f;
    this->Property_1 = 0.00f;
    this->Property_2 = 0.00f;
    this->Property_3 = 0.00f;
}

