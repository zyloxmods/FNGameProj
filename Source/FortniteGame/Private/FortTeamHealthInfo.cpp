#include "FortTeamHealthInfo.h"
#include "Net/UnrealNetwork.h"

void AFortTeamHealthInfo::OnRep_RepDataReplicated() {
}

void AFortTeamHealthInfo::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortTeamHealthInfo, OwnerHealthComponent);
    DOREPLIFETIME(AFortTeamHealthInfo, RepData);
    DOREPLIFETIME(AFortTeamHealthInfo, TeamNum);
}

AFortTeamHealthInfo::AFortTeamHealthInfo() {
    this->OwnerHealthComponent = NULL;
    this->FortTeamInfo = NULL;
    this->TeamNum = 0;
}

