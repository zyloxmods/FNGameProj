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

UFortWorldItemDefinition::UFortWorldItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    DropBehavior = EWorldItemDropBehavior::DropAsPickup;
    ItemType = EFortItemType::WorldItem;
    bIgnoreRespawningForDroppingAsPickup = false;
    bCanAutoEquipByClass = true;
    bPersistInInventoryWhenFinalStackEmpty = false;
    bSupportsQuickbarFocus = true;
    bSupportsQuickbarFocusForGamepadOnly = false;
    bShouldActivateWhenFocused = true;
    bForceFocusWhenAdded = false;
    bForceIntoOverflow = false;
    bForceStayInOverflow = false;
    bDropCurrentItemOnOverflow = true;
    bShouldShowItemToast = true;
    bShowDirectionalArrowWhenFarOff = true;
    bCanBeDropped = true;
    bCanBeReplacedByPickup = true;
    bItemCanBeStolen = false;
    bCanBeDepositedInStorageVault = true;
    bItemHasDurability = false;
    bAllowedToBeLockedInInventory = false;
    bOverridePickupMeshTransform = false;
    bAlwaysCountForCollectionQuest = false;
    bDropOnDeath = false;
    bDropOnLogout = false;
    bDropOnDBNO = false;
    bDoesNotNeedSourceSchematic = false;
    bUsesGoverningTags = false;
    DropCount = 0;
    MiniMapViewableDistance = 1;
    bIsPickupASpecialActor = false;
    DisassembleDurabilityDegradeMinLootPercent = 1;
    DisassembleDurabilityDegradeMaxLootPercent = 1;
    PreferredQuickbarSlot = 0;
    MinLevel = 0;
    MaxLevel = 0;
    NumberOfSlotsToTake = 1;
}

