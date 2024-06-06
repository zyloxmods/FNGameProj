#include "RandomDayphaseFX.h"

FRandomDayphaseFX::FRandomDayphaseFX() {
    ParticleSystem = NULL;
    ChanceToSpawnFX = 1;
    DetailMode = DM_Low;
    MaxDrawDistance = 1;
    bRandomSelectionAlreadyHappened = false;
    SpawnedComponent = NULL;
}

