#include "SafeZoneStateBasedActorSpawnerData.h"

FSafeZoneStateBasedActorSpawnerData::FSafeZoneStateBasedActorSpawnerData() {
    SafeZoneStateToStartSpawning = EFortSafeZoneState::None;
    ActorClassToSpawn = NULL;
    BasePlacementQuery = NULL;
    SpawnActorPlacementQuery = NULL;
    SpawnedActorRemovalQuery = NULL;
    BaseQueryingAttemptIntervalTimeSeconds = 1;
    SpawnedActorRemovalQueryInterval = 1;
}

