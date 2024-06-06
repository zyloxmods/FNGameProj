#include "FortExpeditionItemDefinition.h"

FGameplayTagContainer UFortExpeditionItemDefinition::GetRequiredTags() const {
    return FGameplayTagContainer{};
}

void UFortExpeditionItemDefinition::GetExpeditionCosts(TArray<FItemAndCount>& OutExpeditionCosts) const {
}

void UFortExpeditionItemDefinition::GetAllRewards(TArray<UFortCardPackItemDefinition*>& OutRewards) {
}

UFortExpeditionItemDefinition::UFortExpeditionItemDefinition(const FObjectInitializer& ObjectInitializer) 
    : Super(ObjectInitializer) {
    ExpeditionDuration_Minutes = 1;
    ExpeditionExpirationDuration_Minutes = 1;
    BaseTargetPowerRating = 0;
    TierFactor = 0;
    MaxTargetPowerClamp = 0;
    ItemType = EFortItemType::Expedition;
}

