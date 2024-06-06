#include "FortMiniMapData.h"

FFortMiniMapData::FFortMiniMapData() {
    MiniMapIcon = NULL;
    bUseIconSize = false;
    bIsVisible = false;
    bIsVisibleOnMiniMap = false;
    bIsVisibleOnMap = false;
    bIsVisibilityBasedOnTeam = false;
    bShowVerticalOffset = false;
    bShowFarOffIndicator = false;
    bDisplayIconEvenOnFogOfWar = false;
    bAllowLocalOverrides = false;
    bUseTeamAffiliationColors = false;
    ColorPulsesPerSecond = 1;
    SizePulsesPerSecond = 1;
    ViewableDistance = 1;
    Priority = 0;
    Team = 0;
}

