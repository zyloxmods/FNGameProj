#include "FortWeaponItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortWeaponItemDefinition::UsesPhantomReserveAmmo() const {
    return false;
}

bool UFortWeaponItemDefinition::TargetingPreventsReload() const {
    return false;
}

bool UFortWeaponItemDefinition::ShouldAllowTargetingDuringReload() const {
    return false;
}

void UFortWeaponItemDefinition::InitializeAlterationsBasedOnLootLevel(FFortItemEntry& ItemEntry) {
}

bool UFortWeaponItemDefinition::HasUniqueAmmo() const {
    return false;
}

FDataTableRowHandle UFortWeaponItemDefinition::GetWeaponStatHandle() const {
    return FDataTableRowHandle{};
}

float UFortWeaponItemDefinition::GetWeaponRechargeAmmoRate(const int32 InLevel) const {
    return 0.0f;
}

float UFortWeaponItemDefinition::GetWeaponRechargeAmmoQuantity(const int32 InLevel) const {
    return 0.0f;
}

USkeletalMesh* UFortWeaponItemDefinition::GetWeaponMeshOverride() const {
    return NULL;
}

TSubclassOf<AFortWeapon> UFortWeaponItemDefinition::GetWeaponActorClass() const {
    return NULL;
}

bool UFortWeaponItemDefinition::GetUsesCustomAmmoType() const {
    return false;
}

TEnumAsByte<EFortWeaponTriggerType::Type> UFortWeaponItemDefinition::GetTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

FText UFortWeaponItemDefinition::GetShortDisplayName() const {
    return FText::GetEmpty();
}

TEnumAsByte<EFortWeaponTriggerType::Type> UFortWeaponItemDefinition::GetSecondaryTriggerType() const {
    return EFortWeaponTriggerType::OnPress;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetSecondaryFireAbility() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleInvalidTargetImage() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleImage() const {
    return NULL;
}

TArray<float> UFortWeaponItemDefinition::GetReticleCornerAngles() const {
    return TArray<float>();
}

UTexture2D* UFortWeaponItemDefinition::GetReticleCenterPerfectAimImage() const {
    return NULL;
}

FVector2D UFortWeaponItemDefinition::GetReticleCenterImageOffset() const {
    return FVector2D{};
}

UTexture2D* UFortWeaponItemDefinition::GetReticleCenterImage() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetReloadAbility() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetPrimaryFireAbility() const {
    return NULL;
}

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetOnHitAbility() const {
    return NULL;
}

float UFortWeaponItemDefinition::GetLowAmmoPercentage() const {
    return 0.0f;
}

float UFortWeaponItemDefinition::GetHitNotifyDuration() const {
    return 0.0f;
}

TArray<TSubclassOf<UFortGameplayAbility>> UFortWeaponItemDefinition::GetEquippedAbilities() const {
    return TArray<TSubclassOf<UFortGameplayAbility>>();
}

FText UFortWeaponItemDefinition::GetDisplayTierAsText(const EFortDisplayTier NewDisplayTier) {
    return FText::GetEmpty();
}

EFortDisplayTier UFortWeaponItemDefinition::GetDisplayTier() const {
    return EFortDisplayTier::Invalid;
}

float UFortWeaponItemDefinition::GetDegradedPercentage() const {
    return 0.0f;
}

UFortAlterationItemDefinition* UFortWeaponItemDefinition::GetBaseCosmeticAlteration() const {
    return NULL;
}

UFortAlterationItemDefinition* UFortWeaponItemDefinition::GetBaseAlteration() const {
    return NULL;
}

TArray<FName> UFortWeaponItemDefinition::GetAnalyticTags() const {
    return TArray<FName>();
}

bool UFortWeaponItemDefinition::AlwaysChargeUpToMin() const {
    return false;
}

bool UFortWeaponItemDefinition::AllowSecondaryFireToInterruptPrimary() const {
    return false;
}

UFortWeaponItemDefinition::UFortWeaponItemDefinition() {
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
	this->MinLevel = 0;
	this->MaxLevel = 0;

	/* FortWeaponItemDefinition defaults */
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
    this->HitNotifyDuration = 0.00f;
    this->ItemType = EFortItemType::Weapon;
}

