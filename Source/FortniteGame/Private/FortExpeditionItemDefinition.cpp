#include "FortExpeditionItemDefinition.h"

FGameplayTagContainer UFortExpeditionItemDefinition::GetRequiredTags() const {
    return FGameplayTagContainer{};
}

void UFortExpeditionItemDefinition::GetExpeditionCosts(TArray<FItemAndCount>& OutExpeditionCosts) const {
}

void UFortExpeditionItemDefinition::GetAllRewards(TArray<UFortCardPackItemDefinition*>& OutRewards) {
}

UFortExpeditionItemDefinition::UFortExpeditionItemDefinition() {
    this->ExpeditionDuration_Minutes = 0.00f;
    this->ExpeditionExpirationDuration_Minutes = 0.00f;
    this->BaseTargetPowerRating = 0;
    this->TierFactor = 0;
    this->MaxTargetPowerClamp = 0;
}

