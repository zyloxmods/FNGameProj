#include "BuildingProp_AISpawner.h"
#include "FortMinigameProgressComponent.h"

void ABuildingProp_AISpawner::SpawnRift() {
}

void ABuildingProp_AISpawner::SetSpawnLocation(USceneComponent* NewSpawnLocation) {
}


void ABuildingProp_AISpawner::MinigameEnded_Implementation() {
}

void ABuildingProp_AISpawner::DestroyRift() {
}

void ABuildingProp_AISpawner::AdjustCollision(bool bIgnore, UPrimitiveComponent* Collision) {
}

ABuildingProp_AISpawner::ABuildingProp_AISpawner() {
    CreativeRiftClass = NULL;
    CreatureManagerComponent = NULL;
    MinigameProgress = CreateDefaultSubobject<UFortMinigameProgressComponent>(TEXT("MinigameComponent"));
    CreativeRift = NULL;
    SpawnLocation = NULL;
    ActivationRangeLevel = 0;
    bUseDistanceToAI = false;
    DespawnRangeOverride = 1;
}

