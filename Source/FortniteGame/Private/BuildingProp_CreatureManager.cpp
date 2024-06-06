#include "BuildingProp_CreatureManager.h"
#include "FortCreativeCreatureManagerInfoComponent.h"



void ABuildingProp_CreatureManager::MinigameStateChange_Implementation(AFortMinigame* Minigame, EFortMinigameState NewMinigameState) {
}

void ABuildingProp_CreatureManager::LoadSkeletalMeshDisplayOption() {
}

void ABuildingProp_CreatureManager::AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh) {
}

ABuildingProp_CreatureManager::ABuildingProp_CreatureManager() {
    SelectedOverrideAggroDistance = 1;
    SelectedOverrideHealth = 0;
    SelectedOverrideScoreValue = 0;
    SelectedOverrideScoreDistribution = EScoreDistributionType::Default;
    SelectedOverrideDamage = 1;
    SelectedEnvironmentalDamageOverride = 1;
    SelectedMovementSpeedMultiplier = 1;
    DamageOverrideEffect = NULL;
    EnvironmentalDamageOverrideEffect = NULL;
    MovementSpeedOverrideEffect = NULL;
    CreatureInfoComponent = CreateDefaultSubobject<UFortCreativeCreatureManagerInfoComponent>(TEXT("CreatureManagerInfoComponent"));
}

