#include "CobaltCombatStormShieldDataEntry.h"

FCobaltCombatStormShieldDataEntry::FCobaltCombatStormShieldDataEntry() {
    bStormShieldActive = false;
    StormShieldActor = NULL;
    RoundIndex = 0;
    LeadingTeam = 0;
    TieBreakerTeam = 0;
    bAwardedFirstEliminationOfRound = false;
    FirstLandTeam = 0;
    POICamera = NULL;
    NextSupplyDropSpawnTime = 1;
}

