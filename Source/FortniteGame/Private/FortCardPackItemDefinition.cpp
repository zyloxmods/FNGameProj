#include "FortCardPackItemDefinition.h"

bool UFortCardPackItemDefinition::IsLlama() const {
    return false;
}

bool UFortCardPackItemDefinition::IsChoicePack() const {
    return false;
}

TSoftObjectPtr<UTexture2D> UFortCardPackItemDefinition::GetXRayImage() const {
    return NULL;
}

UFortPackPersonality* UFortCardPackItemDefinition::GetPackPersonality() const {
    return NULL;
}

UTexture* UFortCardPackItemDefinition::GetPackImage() const {
    return NULL;
}

FLinearColor UFortCardPackItemDefinition::GetPackColor() const {
    return FLinearColor{};
}

int32 UFortCardPackItemDefinition::GetDisplayRarityLevel() const {
    return 0;
}

UFortCardPackItemDefinition::UFortCardPackItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bIsLlama = false;
    ItemType = EFortItemType::CardPack;
    bIsChoicePack = false;
    bAutoOpenAsReward = true;
    LootTier = 0;
    DisplayRarityLevel = 0;
}

