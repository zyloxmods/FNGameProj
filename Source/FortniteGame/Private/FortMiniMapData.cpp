#include "FortMiniMapData.h"

FFortMiniMapData::FFortMiniMapData() {
    this->MiniMapIcon = NULL;
    this->bUseIconSize = false;
    this->bIsVisible = false;
    this->bIsVisibleOnMiniMap = false;
    this->bShowVerticalOffset = false;
    this->bShowFarOffIndicator = false;
    this->bDisplayIconEvenOnFogOfWar = false;
    this->bAllowLocalOverrides = false;
    this->bUseTeamAffiliationColors = false;
    this->ColorPulsesPerSecond = 0.00f;
    this->SizePulsesPerSecond = 0.00f;
    this->ViewableDistance = 0.00f;
    this->Priority = 0;
}

