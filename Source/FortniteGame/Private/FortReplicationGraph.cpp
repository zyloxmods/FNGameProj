#include "FortReplicationGraph.h"

void UFortReplicationGraph::OnVehicleDestroyed(AActor* DestroyedVehicle) {
}

void UFortReplicationGraph::OnHighFrequencyPawnDestroyed(AActor* Pawn) {
}

UFortReplicationGraph::UFortReplicationGraph() {
    this->RootGridNode = NULL;
    this->AlwaysRelevantNode = NULL;
    this->BroadcastSpectatorRelevancyNode = NULL;
}

