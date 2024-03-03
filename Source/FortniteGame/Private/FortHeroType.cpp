#include "FortHeroType.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

FText UFortHeroType::GetSubType() const {
    return FText::GetEmpty();
}

UFortHeroGameplayDefinition* UFortHeroType::GetHeroGameplayDefinition() {
    return NULL;
}

UAnimMontage* UFortHeroType::GetFrontendAnimMontageIdleOverride() const {
    return NULL;
}

TSubclassOf<UFrontendAnimInstance> UFortHeroType::GetFrontendAnimClass() const {
    return NULL;
}

UFortHeroType::UFortHeroType() {
    this->bForceShowHeadAccessory = false;
    this->bForceShowBackpack = false;
    this->HeroGameplayDefinition = NULL;
    this->HeroCosmeticOutfitDefinition = NULL;
    this->HeroCosmeticBackblingDefinition = NULL;
    this->FrontEndBackPreviewRotationOffset = 1;
    this->ItemType = EFortItemType::Hero;
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    Manager.AddNativeGameplayTag(TEXT("Unlocks.Class.Commando"));
    RequiredGPTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Unlocks.Class.Commando")));
}

