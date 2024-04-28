#include "AthenaEmojiItemDefinition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

void UAthenaEmojiItemDefinition::ConfigureParticleSystem(UParticleSystemComponent* ParticleSystem, TSoftObjectPtr<UTexture2D> OverrideImage) {
}

UAthenaEmojiItemDefinition::UAthenaEmojiItemDefinition() {
    this->FrameIndex = 0;
    this->FrameCount = 1;
    this->BaseMaterial = NULL;
    this->LifetimeIntroSeconds = 0.00f;
    this->LifetimeMidSeconds = 0.00f;
    this->LifetimeOutroSeconds = 0.00f;
    this->GeneratedMaterial = NULL;
    ItemType = EFortItemType::AthenaDance;
    bMovingEmote = true;
    GameplayTags.RemoveTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Dance")));
    DisplayName = FText::FromString("Emoticon");
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    Manager.AddNativeGameplayTag(TEXT("Cosmetics.EmoteType.Emoji"));
    GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Emoji")));
}

