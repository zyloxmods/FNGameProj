#include "FortAthenaMutator_Pow.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Pow::OnRep_RespawningCurrentlyAllowed() {
}

void AFortAthenaMutator_Pow::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

float AFortAthenaMutator_Pow::GetPlayerCurrentShield(AFortPlayerStateAthena* Player) const {
    return 0.0f;
}

void AFortAthenaMutator_Pow::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Pow, PlayerData);
    DOREPLIFETIME(AFortAthenaMutator_Pow, bRespawningCurrentlyAllowed);
}

AFortAthenaMutator_Pow::AFortAthenaMutator_Pow() {
    bRespawningCurrentlyAllowed = true;
}

