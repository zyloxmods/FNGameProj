#include "FortWeaponItemDefinition.h"
#include "Templates/SubclassOf.h"

bool UFortWeaponItemDefinition::TargetingPreventsReload() const {
    return false;
}

bool UFortWeaponItemDefinition::ShouldAllowTargetingDuringReload() const {
    return false;
}

bool UFortWeaponItemDefinition::HasUniqueAmmo() const {
    return false;
}

FDataTableRowHandle UFortWeaponItemDefinition::GetWeaponStatHandle() const {
    return FDataTableRowHandle{};
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

TSubclassOf<UFortGameplayAbility> UFortWeaponItemDefinition::GetSecondaryFireAbility() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleOuterImage() const {
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

UTexture2D* UFortWeaponItemDefinition::GetReticleAutoFireImage() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleAltOuterImage() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetReticleAltCenterImage() const {
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

UTexture2D* UFortWeaponItemDefinition::GetMuzzleBlockedImage() const {
    return NULL;
}

float UFortWeaponItemDefinition::GetLowAmmoPercentage() const {
    return 0.0f;
}

UCurveFloat* UFortWeaponItemDefinition::GetHitNotifyOpacityCurve() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetHitNotifyLocationImage() const {
    return NULL;
}

UTexture2D* UFortWeaponItemDefinition::GetHitNotifyImage() const {
    return NULL;
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

void UFortWeaponItemDefinition::AsyncLoadWeaponMeshOverride(AFortWeaponAsyncLoadHelper* InAsyncLoadHelper) {
}

bool UFortWeaponItemDefinition::AlwaysChargeUpToMin() const {
    return false;
}

UFortWeaponItemDefinition::UFortWeaponItemDefinition() {
    this->LowAmmoPercentage = 0.25f;
    this->DegradedPercentage = 0.10f;
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
    this->AsyncLoadHelper = NULL;
}

