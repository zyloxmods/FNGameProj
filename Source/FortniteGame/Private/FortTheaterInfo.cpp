#include "FortTheaterInfo.h"

UFortTheaterInfo::UFortTheaterInfo() {
    SaveVersion = 0;
    bForceIncludeInCookIfReferenced = false;
    SelectedZoneTheme = NULL;
    SelectedZoneRegion = NULL;
    SelectedTileType = EFortTheaterMapTileType::Normal;
    bCanSelectedTileHaveMissionAlert = false;
    bShouldSelectedTileDisallowQuickplay = false;
    TheaterWidth = 0;
    TheaterHeight = 0;
}

