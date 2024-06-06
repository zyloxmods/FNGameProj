#include "AthenaDanceItemDefinition.h"
#include "GameplayTagContainer.h"
#include "GameplayTagsManager.h"

FText UAthenaDanceItemDefinition::GetChatTriggerCommandName() const {
    return FText::GetEmpty();
}

UAthenaDanceItemDefinition::UAthenaDanceItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    bMovingEmote = false;
    bMovingEmoteSkipLandingFX = false;
    bMoveForwardOnly = false;
    bMoveFollowingOnly = false;
    bGroupEmote = false;
    bUseHighPreviewCamera = false;
    bGroupAnimationSync = false;
    WalkForwardSpeed = 1;
    GroupEmoteToStartLeader = NULL;
    GroupEmoteToStartFollower = NULL;
    GroupEmoteToStartLeaderIfBothOwn = NULL;
    GroupEmoteToStartFollowerIfBothOwn = NULL;
    bLockGroupEmoteLeaderRotation = false;
    GroupEmoteLeaderRotationYawOffset = 1;
    GroupEmoteFollowerRotationYawOffset = 1;
    ItemType = EFortItemType::AthenaDance;
    WalkForwardSpeed = 300.00f;
    ItemType = EFortItemType::AthenaDance;
    GameplayTags.AddTag(FGameplayTag::RequestGameplayTag(FName("Cosmetics.EmoteType.Dance")));
}

