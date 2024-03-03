#include "ArsenicCorePopulationTracker.h"
#include "Net/UnrealNetwork.h"

void AArsenicCorePopulationTracker::OnGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, AFortPlayerStateAthena* ChangedPS) {
}

void AArsenicCorePopulationTracker::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AArsenicCorePopulationTracker, PopulationGridInfo);
    DOREPLIFETIME(AArsenicCorePopulationTracker, PopulationGrid);
}

AArsenicCorePopulationTracker::AArsenicCorePopulationTracker() {
    this->ArsenicCoreMutator = NULL;
}

