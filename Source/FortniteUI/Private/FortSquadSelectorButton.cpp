#include "FortSquadSelectorButton.h"

bool UFortSquadSelectorButton::TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData) const {
    return false;
}

void UFortSquadSelectorButton::SetIdOfSquadToManageBP(const FName SquadId) {
}



FName UFortSquadSelectorButton::GetIdOfSquadToManageBP() const {
    return NAME_None;
}

UFortSquadSelectorButton::UFortSquadSelectorButton() {
    this->SquadManagementScreenType = NULL;
}

