#include "AthenaGadgetItemDefinition.h"

UAthenaGadgetItemDefinition::UAthenaGadgetItemDefinition() {
    this->bCanBeDroppedWhenEquipmentChangeIsBlocked = false;
    this->bAllowedFuelGadgetUI = true;
    ItemType = EFortItemType::AthenaGadget;
}

