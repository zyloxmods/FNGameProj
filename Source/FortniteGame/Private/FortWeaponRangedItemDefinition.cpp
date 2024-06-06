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

UFortWeaponRangedItemDefinition::UFortWeaponRangedItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
	/* FortWorldItemDefinition modified defaults */
	DropBehavior = EWorldItemDropBehavior::DropAsPickup;
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
	bItemCanBeStolen = true;
	bCanBeDepositedInStorageVault = true;
	bItemHasDurability = true;
	bAllowedToBeLockedInInventory = false;
	bOverridePickupMeshTransform = false;
	bAlwaysCountForCollectionQuest = false;
	bDropOnDeath = false;
	bDropOnLogout = false;
	bDropOnDBNO = false;
	bDoesNotNeedSourceSchematic = false;
	bInventorySizeLimited = true;
	DropCount = -1;
	MiniMapViewableDistance = 8000.00f;
	DisassembleDurabilityDegradeMinLootPercent = 0.20f;
	DisassembleDurabilityDegradeMaxLootPercent = 0.80f;
	PreferredQuickbarSlot = -1;
	MinLevel = 1;
	MaxLevel = -1;

	/* FortWeaponItemDefinition defaults */
	ReloadAbility = UFortGameplayAbility_Reload::StaticClass();
	LowAmmoPercentage = 0.25f;
	TriggerType = EFortWeaponTriggerType::OnPress;
	DisplayTier = EFortDisplayTier::Invalid;
	bUsesCustomAmmoType = false;
	bAllowTargetingDuringReload = false;
	bTargetingPreventsReload = false;
	bAlwaysChargeUpToMin = false;
	bReticleCornerOutsideSpreadRadius = false;
	bValidForLastEquipped = true;
	bPreventDefaultPreload = false;
	HitNotifyDuration = 1.00f;
	ReticleCornerAngles = {0.0f, 90.0f, 180.0f, 270.0f};

	/* FortWeaponRangedItemDefinition defaults */
	bUseNativeWeaponTrace = true;
    bTraceThroughPawns = false;
    bTraceThroughWorld = false;
    bShouldSpawnBulletShellFX = false;
    bShouldUsePerfectAimWhenTargetingMinSpread = true;
    bDoNotAllowDoublePump = false;
    bUseOnTouch = false;
    bAllowADSInAir = false;
    bShowReticleHitNotifyAtImpactLocation = false;
    bForceProjectileTooltip = false;
    ItemType = EFortItemType::WeaponRanged;
}

