#include "BuildingProp_DeimosSpawner.h"
#include "FortMinigameProgressComponent.h"

void ABuildingProp_DeimosSpawner::SpawnRift(FVector SpawnPosition) {
}

void ABuildingProp_DeimosSpawner::SetSpawnLocation(USceneComponent* NewSpawnLocation) {
}


void ABuildingProp_DeimosSpawner::MinigameStarted_Implementation() {
}

void ABuildingProp_DeimosSpawner::MinigameEnded_Implementation() {
}

void ABuildingProp_DeimosSpawner::AdjustCollisionOfStaticMesh(bool bIgnore, UStaticMeshComponent* Mesh) {
}

ABuildingProp_DeimosSpawner::ABuildingProp_DeimosSpawner() {
    this->DeimosSpawnerClass = NULL;
    this->ActivationRangeLevel = 0;
    this->bNoSpawnLimitEnabled = false;
    this->bUseDistanceToAI = false;
    this->DespawnRangeOverride = 0.00f;
    this->bDamageBuildingsOnSpawn = true;
    this->bInvulnerable = false;
    this->bVisible = true;
    this->bHideVFX = false;
    this->OverrideQueryRadius = 768.00f;
    this->bSortSlotsByBestScore = false;
    this->MinigameProgress = CreateDefaultSubobject<UFortMinigameProgressComponent>(TEXT("MinigameComponent"));
    this->SpawnLocation = NULL;
    this->CreatureManagerComponent = NULL;
    this->CachedDeimosSpawner = NULL;
    this->bEnableCreativeCreatureSpawners = true;
}

