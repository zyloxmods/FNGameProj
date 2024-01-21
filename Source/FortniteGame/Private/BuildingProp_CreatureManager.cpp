#include "BuildingProp_CreatureManager.h"
#include "FortCreativeCreatureManagerInfoComponent.h"



void ABuildingProp_CreatureManager::MinigameStateChange_Implementation(EFortMinigameState NewMinigameState) {
}

void ABuildingProp_CreatureManager::LoadSkeletalMeshDisplayOption(TSoftObjectPtr<UMaterialInterface> Material) {
}

void ABuildingProp_CreatureManager::AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh) {
}

ABuildingProp_CreatureManager::ABuildingProp_CreatureManager() {
    this->SelectedOverrideAggroDistance = -1.00f;
    this->SelectedOverrideHealth = -1;
    this->SelectedOverrideScoreValue = -1;
    this->SelectedOverrideDamage = -1.00f;
    this->SelectedEnvironmentalDamageOverride = -1.00f;
    this->SelectedMovementSpeedMultiplier = -1.00f;
    this->DamageOverrideEffect = NULL;
    this->EnvironmentalDamageOverrideEffect = NULL;
    this->MovementSpeedOverrideEffect = NULL;
    this->CreatureInfoComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerInfoComponent>(TEXT("CreatureManagerInfoComponent"));
}

