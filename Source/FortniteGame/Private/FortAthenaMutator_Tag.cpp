#include "FortAthenaMutator_Tag.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Tag::OnGamePhaseChanged(EAthenaGamePhase NewPhase) {
}

void AFortAthenaMutator_Tag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Tag, ServerEndTime);
    DOREPLIFETIME(AFortAthenaMutator_Tag, TagTeamInfo);
}

AFortAthenaMutator_Tag::AFortAthenaMutator_Tag() {
    this->ServerEndTime = -1.00f;
    this->RedTeam = 3;
    this->BlueTeam = 4;
    this->RedTeamSquad = 0;
}

