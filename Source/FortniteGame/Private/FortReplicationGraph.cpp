#include "FortReplicationGraph.h"

void UFortReplicationGraph::OnVehicleDestroyed(AActor* DestroyedVehicle) {
}

void UFortReplicationGraph::OnHighFrequencyPawnDestroyed(AActor* Pawn) {
}

void UFortReplicationGraph::OnGameStatePlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

UFortReplicationGraph::UFortReplicationGraph() {
    RootGridNode = NULL;
    AlwaysRelevantNode = NULL;
    LiveSpectatorRelevancyNode = NULL;
    PlayerStateLimiterNode = NULL;
}

