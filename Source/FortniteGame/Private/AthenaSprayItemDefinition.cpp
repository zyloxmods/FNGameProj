#include "AthenaSprayItemDefinition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

bool UAthenaSprayItemDefinition::ShouldUseBannerAsTexture() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UAthenaSprayItemDefinition::GetDecalTexture() const {
    return NULL;
}

TSoftObjectPtr<UMaterialInterface> UAthenaSprayItemDefinition::GetDecalMaterial() const {
    return NULL;
}

UAthenaSprayItemDefinition::UAthenaSprayItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bUseBannerAsTexture = false;
    ItemType = EFortItemType::AthenaDance;
    GameplayTags.RemoveTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Dance")));
    GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Spray")));
}

