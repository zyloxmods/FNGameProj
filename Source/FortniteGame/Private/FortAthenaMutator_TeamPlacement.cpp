#include "FortAthenaMutator_TeamPlacement.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_TeamPlacement::UpdateTeams() {
}

void AFortAthenaMutator_TeamPlacement::OnRep_TeamsInfo() {
}

void AFortAthenaMutator_TeamPlacement::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_TeamPlacement, TeamsInfo);
}

AFortAthenaMutator_TeamPlacement::AFortAthenaMutator_TeamPlacement() {
}

