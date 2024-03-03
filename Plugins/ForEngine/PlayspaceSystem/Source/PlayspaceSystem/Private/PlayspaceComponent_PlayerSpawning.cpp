#include "PlayspaceComponent_PlayerSpawning.h"

UPlayspaceComponent_PlayerSpawning::UPlayspaceComponent_PlayerSpawning() {
    this->bQueueUserForSpawnWhenAdded = false;
    this->SpawnDelayMin = 1;
    this->SpawnDelayMax = 1;
}

