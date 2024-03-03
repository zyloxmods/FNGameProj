#include "RandomDayphaseFX.h"

FRandomDayphaseFX::FRandomDayphaseFX() {
    this->ParticleSystem = NULL;
    this->ChanceToSpawnFX = 1;
    this->DetailMode = DM_Low;
    this->MaxDrawDistance = 1;
    this->bRandomSelectionAlreadyHappened = false;
    this->SpawnedComponent = NULL;
}

