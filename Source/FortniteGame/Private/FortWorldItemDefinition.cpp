#include "FortWorldItemDefinition.h"

float UFortWorldItemDefinition::GetMaxDurability(int32 ItemLevel) const {
    return 0.0f;
}

float UFortWorldItemDefinition::GetDPSAtLevel(int32 ItemLevel) const {
    return 0.0f;
}

float UFortWorldItemDefinition::GetDamageAtLevel(int32 ItemLevel) const {
    return 0.0f;
}

UFortWorldItemDefinition* UFortWorldItemDefinition::GetAmmoWorldItemDefinition_BP() const {
    return NULL;
}

bool UFortWorldItemDefinition::CanBeDisassembled() const {
    return false;
}

UFortWorldItemDefinition::UFortWorldItemDefinition() {
    this->DropBehavior = EWorldItemDropBehavior::DropAsPickup;
    this->ItemType = EFortItemType::WorldItem;
    this->bIgnoreRespawningForDroppingAsPickup = false;
    this->bCanAutoEquipByClass = true;
    this->bPersistInInventoryWhenFinalStackEmpty = false;
    this->bSupportsQuickbarFocus = true;
    this->bSupportsQuickbarFocusForGamepadOnly = false;
    this->bShouldActivateWhenFocused = true;
    this->bForceFocusWhenAdded = false;
    this->bForceIntoOverflow = false;
    this->bForceStayInOverflow = false;
    this->bDropCurrentItemOnOverflow = true;
    this->bShouldShowItemToast = true;
    this->bShowDirectionalArrowWhenFarOff = true;
    this->bCanBeDropped = true;
    this->bCanBeReplacedByPickup = true;
    this->bItemCanBeStolen = false;
    this->bCanBeDepositedInStorageVault = true;
    this->bItemHasDurability = false;
    this->bAllowedToBeLockedInInventory = false;
    this->bOverridePickupMeshTransform = false;
    this->bAlwaysCountForCollectionQuest = false;
    this->bDropOnDeath = false;
    this->bDropOnLogout = false;
    this->bDropOnDBNO = false;
    this->bDoesNotNeedSourceSchematic = false;
    this->bUsesGoverningTags = false;
    this->DropCount = 0;
    this->MiniMapViewableDistance = 1;
    this->bIsPickupASpecialActor = false;
    this->DisassembleDurabilityDegradeMinLootPercent = 1;
    this->DisassembleDurabilityDegradeMaxLootPercent = 1;
    this->PreferredQuickbarSlot = 0;
    this->MinLevel = 0;
    this->MaxLevel = 0;
    this->NumberOfSlotsToTake = 1;
}

