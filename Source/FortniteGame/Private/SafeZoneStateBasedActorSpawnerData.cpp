#include "SafeZoneStateBasedActorSpawnerData.h"

FSafeZoneStateBasedActorSpawnerData::FSafeZoneStateBasedActorSpawnerData() {
    this->SafeZoneStateToStartSpawning = EFortSafeZoneState::None;
    this->ActorClassToSpawn = NULL;
    this->BasePlacementQuery = NULL;
    this->SpawnActorPlacementQuery = NULL;
    this->SpawnedActorRemovalQuery = NULL;
    this->BaseQueryingAttemptIntervalTimeSeconds = 1;
    this->SpawnedActorRemovalQueryInterval = 1;
}

