#include "FortTheaterTileEditorData.h"

FFortTheaterTileEditorData::FFortTheaterTileEditorData() {
    this->XCoordinate = 0;
    this->YCoordinate = 0;
    this->ZoneTheme = NULL;
    this->Region = NULL;
    this->TileType = EFortTheaterMapTileType::Normal;
    this->bCanBeMissionAlert = false;
}

