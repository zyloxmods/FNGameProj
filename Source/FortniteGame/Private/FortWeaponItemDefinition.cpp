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

UFortWeaponItemDefinition::UFortWeaponItemDefinition(const FObjectInitializer& ObjectInitializer) 
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
	MinLevel = 0;
	MaxLevel = 0;

	/* FortWeaponItemDefinition defaults */
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
    HitNotifyDuration = 0.00f;
    ItemType = EFortItemType::Weapon;
}

