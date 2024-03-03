#include "AthenaGadgetItemDefinition.h"

UAthenaGadgetItemDefinition::UAthenaGadgetItemDefinition() {
    this->bCanBeDroppedWhenEquipmentChangeIsBlocked = false;
    this->bAllowedFuelGadgetUI = true;
    this->bShowCooldownUI = false;
    this->bShowShortDescriptionInPickupDisplay = false;
    this->bDisplayPlayerNameForInventoryActor = false;
    this->bDisplayHealthForInventoryActor = false;
    this->bDisplayShieldForInventoryActor = false;
    this->ContextOverrideWidget = NULL;
    this->ItemType = EFortItemType::AthenaGadget;
}

