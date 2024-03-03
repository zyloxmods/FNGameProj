#include "HUDLayoutDataEntry.h"

FHUDLayoutDataEntry::FHUDLayoutDataEntry() {
    this->ZOrder = 0;
    this->BuildVisibility = EBacchusHUDStateType::DoNothing;
    this->CombatVisibility = EBacchusHUDStateType::DoNothing;
    this->EditVisibility = EBacchusHUDStateType::DoNothing;
    this->CreativeVisibility = EBacchusHUDStateType::DoNothing;
    this->Property_0 = 1;
    this->Property_1 = 1;
    this->Property_2 = 1;
    this->Property_3 = 1;
}

