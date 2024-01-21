#include "RandomDayphaseFX.h"

FRandomDayphaseFX::FRandomDayphaseFX() {
    this->ParticleSystem = NULL;
    this->ChanceToSpawnFX = 0.00f;
    this->DetailMode = DM_Low;
    this->MaxDrawDistance = 0.00f;
    this->bRandomSelectionAlreadyHappened = false;
    this->SpawnedComponent = NULL;
}

