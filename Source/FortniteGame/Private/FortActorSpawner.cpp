#include "FortActorSpawner.h"

bool AFortActorSpawner::TrySpawnActor() {
    return false;
}


AFortActorSpawner::AFortActorSpawner() {
    this->SpawnerAuthority = EFortActorSpawnerAuthority::ServerAuthoritative;
    this->bSpawnOnBeginPlay = true;
    this->bDestroyAfterSpawn = true;
}

