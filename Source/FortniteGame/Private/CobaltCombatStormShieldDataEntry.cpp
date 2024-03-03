#include "CobaltCombatStormShieldDataEntry.h"

FCobaltCombatStormShieldDataEntry::FCobaltCombatStormShieldDataEntry() {
    this->bStormShieldActive = false;
    this->StormShieldActor = NULL;
    this->RoundIndex = 0;
    this->LeadingTeam = 0;
    this->TieBreakerTeam = 0;
    this->bAwardedFirstEliminationOfRound = false;
    this->FirstLandTeam = 0;
    this->POICamera = NULL;
    this->NextSupplyDropSpawnTime = 1;
}

