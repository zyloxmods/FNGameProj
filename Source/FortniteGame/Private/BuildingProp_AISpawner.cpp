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
    this->CreativeRiftClass = NULL;
    this->CreatureManagerComponent = NULL;
    this->MinigameProgress = CreateDefaultSubobject<UFortMinigameProgressComponent>(TEXT("MinigameComponent"));
    this->CreativeRift = NULL;
    this->SpawnLocation = NULL;
    this->ActivationRangeLevel = 0;
    this->bUseDistanceToAI = false;
    this->DespawnRangeOverride = 1;
}

