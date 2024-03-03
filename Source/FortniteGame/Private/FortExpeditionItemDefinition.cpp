#include "FortExpeditionItemDefinition.h"

FGameplayTagContainer UFortExpeditionItemDefinition::GetRequiredTags() const {
    return FGameplayTagContainer{};
}

void UFortExpeditionItemDefinition::GetExpeditionCosts(TArray<FItemAndCount>& OutExpeditionCosts) const {
}

void UFortExpeditionItemDefinition::GetAllRewards(TArray<UFortCardPackItemDefinition*>& OutRewards) {
}

UFortExpeditionItemDefinition::UFortExpeditionItemDefinition() {
    this->ExpeditionDuration_Minutes = 1;
    this->ExpeditionExpirationDuration_Minutes = 1;
    this->BaseTargetPowerRating = 0;
    this->TierFactor = 0;
    this->MaxTargetPowerClamp = 0;
    this->ItemType = EFortItemType::Expedition;
}

