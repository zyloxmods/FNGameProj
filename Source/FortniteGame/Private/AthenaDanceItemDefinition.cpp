#include "AthenaDanceItemDefinition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

FText UAthenaDanceItemDefinition::GetChatTriggerCommandName() const {
    return FText::GetEmpty();
}

UAthenaDanceItemDefinition::UAthenaDanceItemDefinition() {
    this->bMovingEmote = false;
    this->bMovingEmoteSkipLandingFX = false;
    this->bMoveForwardOnly = false;
    this->bMoveFollowingOnly = false;
    this->bGroupEmote = false;
    this->bUseHighPreviewCamera = false;
    this->bGroupAnimationSync = false;
    this->WalkForwardSpeed = 1;
    this->GroupEmoteToStartLeader = NULL;
    this->GroupEmoteToStartFollower = NULL;
    this->GroupEmoteToStartLeaderIfBothOwn = NULL;
    this->GroupEmoteToStartFollowerIfBothOwn = NULL;
    this->bLockGroupEmoteLeaderRotation = false;
    this->GroupEmoteLeaderRotationYawOffset = 1;
    this->GroupEmoteFollowerRotationYawOffset = 1;
    this->ItemType = EFortItemType::AthenaDance;
    this->WalkForwardSpeed = 300.00f;
    ItemType = EFortItemType::AthenaDance;
    UGameplayTagsManager& Manager = UGameplayTagsManager::Get();
    Manager.AddNativeGameplayTag(TEXT("Cosmetics.EmoteType.Dance"));
    GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Dance")));
}

