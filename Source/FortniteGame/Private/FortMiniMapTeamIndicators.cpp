#include "FortMiniMapTeamIndicators.h"

UFortMiniMapTeamIndicators::UFortMiniMapTeamIndicators() {
    this->PlayerController = NULL;
    this->bSpectating = false;
    this->SpectatorPC = NULL;
    this->IndicatedPlayersCache = NULL;
    this->PlatformScale = 1.00f;
}

