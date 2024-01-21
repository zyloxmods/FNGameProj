#include "HomebaseSquad.h"

FHomebaseSquad::FHomebaseSquad() {
    this->SquadType = EFortHomebaseSquadType::AttributeSquad;
    this->MaxNumDefendersAllowedInLevel = 0;
    this->MaxNumDefendersAllowedInGroupLevel = 0;
    this->bConsiderNumPlayersForMaxNumDefenders = false;
    this->bAlwaysRemoveOldestDefenderWhenReplacing = false;
}

