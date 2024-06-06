#include "FortAthenaMutator_TimedRespawnHelper.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_TimedRespawnHelper::OnRep_ServerTimeRespawnIsDisallowed() {
}

void AFortAthenaMutator_TimedRespawnHelper::OnMutatorGameplayEvent(int32 EventId, int32 EventParam1, int32 EventParam2, int32 EventParam3) {
}

void AFortAthenaMutator_TimedRespawnHelper::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_TimedRespawnHelper::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_TimedRespawnHelper, ServerTimeRespawnIsDisallowed);
}

AFortAthenaMutator_TimedRespawnHelper::AFortAthenaMutator_TimedRespawnHelper() {
    ServerTimeRespawnIsDisallowed = 1;
}

