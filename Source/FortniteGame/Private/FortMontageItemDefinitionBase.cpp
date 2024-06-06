#include "FortMontageItemDefinitionBase.h"

bool UFortMontageItemDefinitionBase::ShouldPlayRandomSectionByName() const {
    return false;
}

bool UFortMontageItemDefinitionBase::ShouldHolsterWeapon(AFortPawn* FortPawn) const {
    return false;
}

void UFortMontageItemDefinitionBase::PreviewInPIE() {
}

FName UFortMontageItemDefinitionBase::PickRandomSectionByName(float RandomNumber) const {
    return NAME_None;
}

FName UFortMontageItemDefinitionBase::PickMontageSection(const UAnimMontage* Montage, AFortPawn* FortPawn) const {
    return NAME_None;
}

FName UFortMontageItemDefinitionBase::PickCosmeticDrivenSectionByName(AFortPawn* PawnPlayingMotage) const {
    return NAME_None;
}

bool UFortMontageItemDefinitionBase::IsMontageItemEmoteWheelExclusive(const AFortPlayerController* FortPC) const {
    return false;
}

bool UFortMontageItemDefinitionBase::HasCosmeticDrivenMotageSection() const {
    return false;
}

UAnimMontage* UFortMontageItemDefinitionBase::GetFrontendPreviewAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

TSoftObjectPtr<UAnimMontage> UFortMontageItemDefinitionBase::GetFrontendPreviewAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, AFortPlayerPawn* PreviewPawn, EFortCustomGender Gender) const {
    return NULL;
}

UAnimMontage* UFortMontageItemDefinitionBase::GetAnimationHardReference(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

TSoftObjectPtr<UAnimMontage> UFortMontageItemDefinitionBase::GetAnimation(TEnumAsByte<EFortCustomBodyType::Type> BodyType, EFortCustomGender Gender, AFortPlayerPawn* PawnContext) const {
    return NULL;
}

bool UFortMontageItemDefinitionBase::CanShowMontageItem(const AFortPlayerController* FortPC) const {
    return false;
}

bool UFortMontageItemDefinitionBase::CanActivateMontageItem(const AFortPlayerController* FortPC, FGameplayTagContainer& OutFailureTags) const {
    return false;
}

bool UFortMontageItemDefinitionBase::CanAccessMontageItem(const AFortPlayerController* FortPC) const {
    return false;
}

UFortMontageItemDefinitionBase::UFortMontageItemDefinitionBase(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    PreviewLoops = 0;
    PreviewLength = 1;
    EmoteCooldownSecs = 1;
    bMontageContainsFacialAnimation = false;
    bPlayRandomSection = false;
    bSwitchToHarvestingToolOnUse = false;
    bHolsterWeapon = false;
    bHolsterWeaponIfDualWieldPickaxe = false;
}

