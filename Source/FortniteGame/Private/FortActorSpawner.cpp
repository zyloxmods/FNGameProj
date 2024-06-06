#include "FortActorSpawner.h"

bool AFortActorSpawner::TrySpawnActor() {
    return false;
}


AFortActorSpawner::AFortActorSpawner() {
    SpawnerAuthority = EFortActorSpawnerAuthority::ServerAuthoritative;
    bSpawnOnBeginPlay = true;
    bDestroyAfterSpawn = true;
}

