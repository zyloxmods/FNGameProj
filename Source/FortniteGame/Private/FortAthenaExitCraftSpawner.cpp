#include "FortAthenaExitCraftSpawner.h"
#include "Components/CapsuleComponent.h"

void AFortAthenaExitCraftSpawner::StartExitCraftSpawnTimer() {
}

void AFortAthenaExitCraftSpawner::DestroyBlockingActors() {
}

AFortAthenaExitCraftSpawner::AFortAthenaExitCraftSpawner() {
    this->DestructionOverlapCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DestructionOverlapMesh_0"));
    this->ExitCraftInfo = NULL;
}

