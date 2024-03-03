#include "FortCreativeCreatureManagerInfoComponent.h"
#include "Templates/SubclassOf.h"

void UFortCreativeCreatureManagerInfoComponent::SetScorePoints(int32 InScorePoints) {
}

void UFortCreativeCreatureManagerInfoComponent::SetScoreDistribution(const EScoreDistributionType InScoreDistribution) {
}

void UFortCreativeCreatureManagerInfoComponent::SetOverrideDamage(float InOverrideDamage) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMovementOverrideTag(FGameplayTag Tag) {
}

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealth(int32 InMaxHealth) {
}

void UFortCreativeCreatureManagerInfoComponent::SetHearingAggroRange(float InHearingAggroRange) {
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverride(float InOverrideDamage) {
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideTag(FGameplayTag Tag) {
}

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideEffect(TSubclassOf<UGameplayEffect> Effect) {
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureManagerComponent(UFortCreativeCreatureManagerComponent* InCreatureManagerComponent) {
}

void UFortCreativeCreatureManagerInfoComponent::SetCreatureBlueprintClass(TSoftClassPtr<AFortAIPawn> InCreatureBlueprintClass) {
}

void UFortCreativeCreatureManagerInfoComponent::ResetScorePoints() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetScoreDistribution() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetOverrideDamage() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetMovementSpeedMultiplier() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetMaxHealth() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetHearingAggroRange() {
}

void UFortCreativeCreatureManagerInfoComponent::ResetEnvironmentalDamageOverride() {
}

int32 UFortCreativeCreatureManagerInfoComponent::GetScorePoints() const {
    return 0;
}

EScoreDistributionType UFortCreativeCreatureManagerInfoComponent::GetScoreDistribution() const {
    return EScoreDistributionType::Default;
}

float UFortCreativeCreatureManagerInfoComponent::GetOverrideDamage() const {
    return 0.0f;
}

float UFortCreativeCreatureManagerInfoComponent::GetMovementSpeedMultiplier() const {
    return 0.0f;
}

int32 UFortCreativeCreatureManagerInfoComponent::GetMaxHealth() const {
    return 0;
}

float UFortCreativeCreatureManagerInfoComponent::GetHearingAggroRange() const {
    return 0.0f;
}

float UFortCreativeCreatureManagerInfoComponent::GetEnvironmentalDamageOverride() const {
    return 0.0f;
}

UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerInfoComponent::GetCreatureManagerComponent() {
    return NULL;
}

TSoftClassPtr<AFortAIPawn> UFortCreativeCreatureManagerInfoComponent::GetCreatureBlueprintClass() const {
    return NULL;
}

UFortCreativeCreatureManagerInfoComponent::UFortCreativeCreatureManagerInfoComponent() {
    this->MaxHealth = 0;
    this->HearingAggroRange = 1;
    this->ScorePoints = 0;
    this->DamageCaused = 1;
    this->EnvironmentalDamageOverride = 1;
    this->MovementSpeedMultiplier = 1;
    this->CreatureManagerComponent = NULL;
    this->DamageOverrideEffect = NULL;
    this->EnvironmentalDamageOverrideEffect = NULL;
    this->MovementSpeedOverrideEffect = NULL;
    this->ScoreDistribution = EScoreDistributionType::Default;
}

