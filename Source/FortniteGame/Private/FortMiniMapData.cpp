#include "FortMiniMapData.h"

FFortMiniMapData::FFortMiniMapData() {
    this->MiniMapIcon = NULL;
    this->bUseIconSize = false;
    this->bIsVisible = false;
    this->bIsVisibleOnMiniMap = false;
    this->bIsVisibleOnMap = false;
    this->bIsVisibilityBasedOnTeam = false;
    this->bShowVerticalOffset = false;
    this->bShowFarOffIndicator = false;
    this->bDisplayIconEvenOnFogOfWar = false;
    this->bAllowLocalOverrides = false;
    this->bUseTeamAffiliationColors = false;
    this->ColorPulsesPerSecond = 1;
    this->SizePulsesPerSecond = 1;
    this->ViewableDistance = 1;
    this->Priority = 0;
    this->Team = 0;
}

