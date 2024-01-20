#include "FortExpeditionItem.h"

bool UFortExpeditionItem::IsExpeditionInProgress() const {
    return false;
}

bool UFortExpeditionItem::IsExpeditionCompleted(FDateTime UtcNow) const {
    return false;
}

bool UFortExpeditionItem::HasExpeditionExpired(FDateTime UtcNow) const {
    return false;
}

float UFortExpeditionItem::GetTargetPowerLevel() const {
    return 0.0f;
}

FTimespan UFortExpeditionItem::GetRemainingExpeditionExpirationDuration(FDateTime UtcNow) const {
    return FTimespan{};
}

FTimespan UFortExpeditionItem::GetRemainingExpeditionDuration(FDateTime UtcNow) const {
    return FTimespan{};
}

float UFortExpeditionItem::GetMinTargetPowerLevelToBegin() const {
    return 0.0f;
}

float UFortExpeditionItem::GetExpeditionSuccessChance() const {
    return 0.0f;
}

FName UFortExpeditionItem::GetExpeditionSquadId() const {
    return NAME_None;
}

void UFortExpeditionItem::GetBonusCriteriaTags(TArray<FGameplayTag>& OutBonusCriteria) const {
}

void UFortExpeditionItem::GetBonusCriteriaBP(TArray<FFortCriteriaRequirementData>& OutBonusCriteria) const {
}

UFortExpeditionItem::UFortExpeditionItem() {
    this->expedition_max_target_power = 0;
    this->expedition_min_target_power = 0;
    this->expedition_success_chance = 0.00f;
}

