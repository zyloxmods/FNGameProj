#include "BuildingProp_CreatureManager.h"
#include "FortCreativeCreatureManagerInfoComponent.h"



void ABuildingProp_CreatureManager::MinigameStateChange_Implementation(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void ABuildingProp_CreatureManager::LoadSkeletalMeshDisplayOption() {
}

void ABuildingProp_CreatureManager::AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh) {
}

ABuildingProp_CreatureManager::ABuildingProp_CreatureManager() {
    this->SelectedOverrideAggroDistance = 1;
    this->SelectedOverrideHealth = 0;
    this->SelectedOverrideScoreValue = 0;
    this->SelectedOverrideScoreDistribution = EScoreDistributionType::Default;
    this->SelectedOverrideDamage = 1;
    this->SelectedEnvironmentalDamageOverride = 1;
    this->SelectedMovementSpeedMultiplier = 1;
    this->DamageOverrideEffect = NULL;
    this->EnvironmentalDamageOverrideEffect = NULL;
    this->MovementSpeedOverrideEffect = NULL;
    this->CreatureInfoComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerInfoComponent>(TEXT("CreatureManagerInfoComponent"));
}

