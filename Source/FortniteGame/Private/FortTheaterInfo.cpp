#include "FortTheaterInfo.h"

UFortTheaterInfo::UFortTheaterInfo() {
    this->SaveVersion = 0;
    this->bForceIncludeInCookIfReferenced = false;
    this->SelectedZoneTheme = NULL;
    this->SelectedZoneRegion = NULL;
    this->SelectedTileType = EFortTheaterMapTileType::Normal;
    this->bCanSelectedTileHaveMissionAlert = false;
    this->bShouldSelectedTileDisallowQuickplay = false;
    this->TheaterWidth = 0;
    this->TheaterHeight = 0;
}

