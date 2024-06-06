#include "HomebaseSquad.h"

FHomebaseSquad::FHomebaseSquad() {
    SquadType = EFortHomebaseSquadType::AttributeSquad;
    MaxNumDefendersAllowedInLevel = 0;
    MaxNumDefendersAllowedInGroupLevel = 0;
    bConsiderNumPlayersForMaxNumDefenders = false;
    bAlwaysRemoveOldestDefenderWhenReplacing = false;
}

