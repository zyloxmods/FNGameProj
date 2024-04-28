#include "AthenaDanceItemDefinition.h"

FText UAthenaDanceItemDefinition::GetChatTriggerCommandName() const {
    return FText::GetEmpty();
}

UAthenaDanceItemDefinition::UAthenaDanceItemDefinition() {
    this->bMovingEmote = false;
    this->bMoveForwardOnly = false;
    this->WalkForwardSpeed = 300.00f;
    ItemType = EFortItemType::AthenaDance;
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    Manager.AddNativeGameplayTag(TEXT("Cosmetics.EmoteType.Dance"));
    GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Dance")));
}

