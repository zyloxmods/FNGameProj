#include "FortAthenaPatrolPathPointProvider.h"

void AFortAthenaPatrolPathPointProvider::OnSpawnedActorDestroyed(AActor* DestroyedActor) {
}

void AFortAthenaPatrolPathPointProvider::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

AFortAthenaPatrolPathPointProvider::AFortAthenaPatrolPathPointProvider() {
    this->CachedGameState = NULL;
}

