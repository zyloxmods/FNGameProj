#include "BGAConsumableSpawner.h"
#include "Components/SceneComponent.h"

ABGAConsumableSpawner::ABGAConsumableSpawner() {
    this->DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    this->AssociatedBuildingActor = NULL;
    this->QueryTemplate = NULL;
    this->bAlignSpawnedActorsToSurface = true;
}

