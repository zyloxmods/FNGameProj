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
    this->CurrentFortHeroType = NULL;
    this->AthenaCharacter = NULL;
    this->AthenaBackBling = NULL;
    this->CharacterParts[0] = NULL;
    this->CharacterParts[1] = NULL;
    this->CharacterParts[2] = NULL;
    this->CharacterParts[3] = NULL;
    this->CharacterParts[4] = NULL;
    this->CharacterParts[5] = NULL;
    this->CharacterParts[6] = NULL;
    this->MannequinBoundsScale = 1;
    this->bIsMannequinVisible = true;
    this->bMannequinCastsHiddenShadow = false;
    this->CharacterPartList[0] = NULL;
    this->CharacterPartList[1] = NULL;
    this->CharacterPartList[2] = NULL;
    this->CharacterPartList[3] = NULL;
    this->CharacterPartList[4] = NULL;
    this->CharacterPartList[5] = NULL;
    this->CharacterPartColorSwatches[0] = NULL;
    this->CharacterPartColorSwatches[1] = NULL;
    this->CharacterPartColorSwatches[2] = NULL;
    this->CharacterPartColorSwatches[3] = NULL;
    this->CharacterPartColorSwatches[4] = NULL;
    this->CharacterPartColorSwatches[5] = NULL;
    this->CharacterPartColorSwatches[6] = NULL;
    this->ColorSwatchesForCharacterParts[0] = NULL;
    this->ColorSwatchesForCharacterParts[1] = NULL;
    this->ColorSwatchesForCharacterParts[2] = NULL;
    this->ColorSwatchesForCharacterParts[3] = NULL;
    this->ColorSwatchesForCharacterParts[4] = NULL;
    this->ColorSwatchesForCharacterParts[5] = NULL;
    this->AccessoryColorSwatchHandler[0] = NULL;
    this->AccessoryColorSwatchHandler[1] = NULL;
    this->AccessoryColorSwatchHandler[2] = NULL;
    this->AccessoryColorSwatchHandler[3] = NULL;
    this->AccessoryColorSwatchHandler[4] = NULL;
    this->AccessoryColorSwatchHandler[5] = NULL;
    this->ColorSwatches[0] = NULL;
    this->ColorSwatches[1] = NULL;
    this->WeaponSkeletalMesh = NULL;
    this->WeaponAttachSocket = TEXT("RightHand");
    this->bInitialized = false;
    this->bLimitTick = true;
    this->bAutoRegisterWithBudgetAllocator = true;
    this->CustomizationAssetLoader = NULL;
}

