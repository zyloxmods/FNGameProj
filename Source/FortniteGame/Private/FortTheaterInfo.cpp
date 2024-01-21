#include "FortTheaterInfo.h"

UFortTheaterInfo::UFortTheaterInfo() {
    this->SaveVersion = 1;
    this->bForceIncludeInCookIfReferenced = false;
    this->SelectedZoneTheme = NULL;
    this->SelectedZoneRegion = NULL;
    this->SelectedTileType = EFortTheaterMapTileType::Normal;
    this->bCanSelectedTileHaveMissionAlert = false;
    this->TheaterWidth = 5;
    this->TheaterHeight = 5;
}

