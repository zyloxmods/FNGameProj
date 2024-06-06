#include "FortAthenaExitCraftSpawner.h"
#include "Components/CapsuleComponent.h"

void AFortAthenaExitCraftSpawner::StartExitCraftSpawnTimer() {
}

void AFortAthenaExitCraftSpawner::DestroyBlockingActors() {
}

AFortAthenaExitCraftSpawner::AFortAthenaExitCraftSpawner() {
    DestructionOverlapCapsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("DestructionOverlapMesh_0"));
    ExitCraftInfo = NULL;
}

