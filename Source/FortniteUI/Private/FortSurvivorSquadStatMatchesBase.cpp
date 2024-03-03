#include "FortSurvivorSquadStatMatchesBase.h"

bool UFortSurvivorSquadStatMatchesBase::TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const {
    return false;
}

void UFortSurvivorSquadStatMatchesBase::SetSummaryView(bool bInSummaryView) {
}

void UFortSurvivorSquadStatMatchesBase::SetIdOfSquadToManageBP(const FName SquadId) {
}


FName UFortSurvivorSquadStatMatchesBase::GetIdOfSquadToManageBP() const {
    return NAME_None;
}


UFortSurvivorSquadStatMatchesBase::UFortSurvivorSquadStatMatchesBase() {
    this->StatMatchClass = NULL;
    this->bSummaryView = false;
}

