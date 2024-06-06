#include "FortPlayerMannequin.h"

void AFortPlayerMannequin::UpdateMorphTargets() {
}

void AFortPlayerMannequin::ToggleGenderBP() {
}

bool AFortPlayerMannequin::SetWeaponSkeletalMesh(USkeletalMesh* SkeletalMesh) {
    return false;
}

void AFortPlayerMannequin::SetSkeletalMesh(USkeletalMesh* SkeletalMesh) {
}

bool AFortPlayerMannequin::SetPart(EFortCustomPartType Part, UCustomCharacterPart* PartAsset) {
    return false;
}

void AFortPlayerMannequin::SetMannequinLightingChannels(bool bChannel0, bool bChannel1, bool bChannel2) {
}

void AFortPlayerMannequin::SetHeroType(UFortHeroType* NewHeroType) {
}

void AFortPlayerMannequin::SetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

void AFortPlayerMannequin::SetAthenaBackpackDefAndVariants(UAthenaBackpackItemDefinition* NewAthenaBackpack, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

void AFortPlayerMannequin::ResetAthenaCharacterDefAndVariants(UAthenaCharacterItemDefinition* NewAthenaCharacter, const TArray<FMcpVariantChannelInfo>& InOverrideVariants) {
}

bool AFortPlayerMannequin::RemovePart(EFortCustomPartType Part) {
    return false;
}



USkeletalMeshComponent* AFortPlayerMannequin::GetPartSkeletalMeshComponent(EFortCustomPartType Part) const {
    return NULL;
}

EFortCustomGender AFortPlayerMannequin::GetGender() const {
    return EFortCustomGender::Invalid;
}

void AFortPlayerMannequin::GetAllPartSkeletalMeshComponents(TArray<USkeletalMeshComponent*>& SkeletalMeshComponents) {
}

FGameplayTagContainer AFortPlayerMannequin::GatherMetaTags(const UAthenaCosmeticItemDefinition* CosmeticItem) const {
    return FGameplayTagContainer{};
}

bool AFortPlayerMannequin::CyclePartBP(EFortCustomPartType Part, bool bNextPart) {
    return false;
}

AFortPlayerMannequin::AFortPlayerMannequin() {
    CurrentFortHeroType = NULL;
    AthenaCharacter = NULL;
    AthenaBackBling = NULL;
    CharacterParts[0] = NULL;
    CharacterParts[1] = NULL;
    CharacterParts[2] = NULL;
    CharacterParts[3] = NULL;
    CharacterParts[4] = NULL;
    CharacterParts[5] = NULL;
    CharacterParts[6] = NULL;
    MannequinBoundsScale = 1;
    bIsMannequinVisible = true;
    bMannequinCastsHiddenShadow = false;
    CharacterPartList[0] = NULL;
    CharacterPartList[1] = NULL;
    CharacterPartList[2] = NULL;
    CharacterPartList[3] = NULL;
    CharacterPartList[4] = NULL;
    CharacterPartList[5] = NULL;
    CharacterPartColorSwatches[0] = NULL;
    CharacterPartColorSwatches[1] = NULL;
    CharacterPartColorSwatches[2] = NULL;
    CharacterPartColorSwatches[3] = NULL;
    CharacterPartColorSwatches[4] = NULL;
    CharacterPartColorSwatches[5] = NULL;
    CharacterPartColorSwatches[6] = NULL;
    ColorSwatchesForCharacterParts[0] = NULL;
    ColorSwatchesForCharacterParts[1] = NULL;
    ColorSwatchesForCharacterParts[2] = NULL;
    ColorSwatchesForCharacterParts[3] = NULL;
    ColorSwatchesForCharacterParts[4] = NULL;
    ColorSwatchesForCharacterParts[5] = NULL;
    AccessoryColorSwatchHandler[0] = NULL;
    AccessoryColorSwatchHandler[1] = NULL;
    AccessoryColorSwatchHandler[2] = NULL;
    AccessoryColorSwatchHandler[3] = NULL;
    AccessoryColorSwatchHandler[4] = NULL;
    AccessoryColorSwatchHandler[5] = NULL;
    ColorSwatches[0] = NULL;
    ColorSwatches[1] = NULL;
    WeaponSkeletalMesh = NULL;
    WeaponAttachSocket = TEXT("RightHand");
    bInitialized = false;
    bLimitTick = true;
    bAutoRegisterWithBudgetAllocator = true;
    CustomizationAssetLoader = NULL;
}

