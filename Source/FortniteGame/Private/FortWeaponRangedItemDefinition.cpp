#include "FortWeaponRangedItemDefinition.h"

#include "FortGameplayAbility_Reload.h"
#include "Templates/SubclassOf.h"

bool UFortWeaponRangedItemDefinition::UseOnTouch() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUsePerfectAimWhenTargetingMinSpread() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldUseNativeWeaponTrace() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughWorld() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldTraceThroughPawns() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldSpawnBulletShellFX() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::ShouldShowReticleHitNotifyAtImpactLocation() const {
    return false;
}

TSubclassOf<AFortProjectileBase> UFortWeaponRangedItemDefinition::GetProjectileTemplate() const {
    return NULL;
}

UParticleSystem* UFortWeaponRangedItemDefinition::GetBulletShellFXTemplate() const {
    return NULL;
}

bool UFortWeaponRangedItemDefinition::ForceProjectileTooltip() const {
    return false;
}

bool UFortWeaponRangedItemDefinition::DoNotAllowDoublePump() const {
    return false;
}

UFortWeaponRangedItemDefinition::UFortWeaponRangedItemDefinition() {
	/* FortWorldItemDefinition modified defaults */
	this->DropBehavior = EWorldItemDropBehavior::DropAsPickup;
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
	this->bItemCanBeStolen = true;
	this->bCanBeDepositedInStorageVault = true;
	this->bItemHasDurability = true;
	this->bAllowedToBeLockedInInventory = false;
	this->bOverridePickupMeshTransform = false;
	this->bAlwaysCountForCollectionQuest = false;
	this->bDropOnDeath = false;
	this->bDropOnLogout = false;
	this->bDropOnDBNO = false;
	this->bDoesNotNeedSourceSchematic = false;
	this->bInventorySizeLimited = true;
	this->DropCount = -1;
	this->MiniMapViewableDistance = 8000.00f;
	this->DisassembleDurabilityDegradeMinLootPercent = 0.20f;
	this->DisassembleDurabilityDegradeMaxLootPercent = 0.80f;
	this->PreferredQuickbarSlot = -1;
	this->MinLevel = 1;
	this->MaxLevel = -1;

	/* FortWeaponItemDefinition defaults */
	this->ReloadAbility = UFortGameplayAbility_Reload::StaticClass();
	this->LowAmmoPercentage = 0.25f;
	this->TriggerType = EFortWeaponTriggerType::OnPress;
	this->DisplayTier = EFortDisplayTier::Invalid;
	this->bUsesCustomAmmoType = false;
	this->bAllowTargetingDuringReload = false;
	this->bTargetingPreventsReload = false;
	this->bAlwaysChargeUpToMin = false;
	this->bReticleCornerOutsideSpreadRadius = false;
	this->bValidForLastEquipped = true;
	this->bPreventDefaultPreload = false;
	this->HitNotifyDuration = 1.00f;
	this->ReticleCornerAngles = {0.0f, 90.0f, 180.0f, 270.0f};

	/* FortWeaponRangedItemDefinition defaults */
	this->bUseNativeWeaponTrace = true;
    this->bTraceThroughPawns = false;
    this->bTraceThroughWorld = false;
    this->bShouldSpawnBulletShellFX = false;
    this->bShouldUsePerfectAimWhenTargetingMinSpread = true;
    this->bDoNotAllowDoublePump = false;
    this->bUseOnTouch = false;
    this->bAllowADSInAir = false;
    this->bShowReticleHitNotifyAtImpactLocation = false;
    this->bForceProjectileTooltip = false;
    this->ItemType = EFortItemType::WeaponRanged;
}

