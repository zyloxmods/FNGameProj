#include "BGAConsumableSpawner.h"
#include "Components/SceneComponent.h"

ABGAConsumableSpawner::ABGAConsumableSpawner() {
    DummyRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRootComp"));
    AssociatedBuildingActor = NULL;
    QueryTemplate = NULL;
    bAlignSpawnedActorsToSurface = true;
}

