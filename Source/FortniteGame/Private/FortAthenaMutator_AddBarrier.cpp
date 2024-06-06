#include "FortAthenaMutator_AddBarrier.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_AddBarrier::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

AAthenaBigBaseWall* AFortAthenaMutator_AddBarrier::GetBigBaseWall() const {
    return NULL;
}

void AFortAthenaMutator_AddBarrier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_AddBarrier, BigBaseWall);
}

AFortAthenaMutator_AddBarrier::AFortAthenaMutator_AddBarrier() {
    BigBaseWallClass = NULL;
    bStartTimerAtSafeZone = false;
    bSpawnAtMidFlightPathDuringBusLockedPhase = true;
    BigBaseWall = NULL;
}

