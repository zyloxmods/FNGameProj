#include "FortMiniMapTeamIndicators.h"

UFortMiniMapTeamIndicators::UFortMiniMapTeamIndicators() {
    PlayerController = NULL;
    bSpectating = false;
    SpectatorPC = NULL;
    IndicatedPlayersCache = NULL;
    PlatformScale = 1;
}

