#include "AthenaGadgetItemDefinition.h"

UAthenaGadgetItemDefinition::UAthenaGadgetItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bCanBeDroppedWhenEquipmentChangeIsBlocked = false;
    bAllowedFuelGadgetUI = true;
    bShowCooldownUI = false;
    bShowShortDescriptionInPickupDisplay = false;
    bDisplayPlayerNameForInventoryActor = false;
    bDisplayHealthForInventoryActor = false;
    bDisplayShieldForInventoryActor = false;
    ContextOverrideWidget = NULL;
    ItemType = EFortItemType::AthenaGadget;
}

