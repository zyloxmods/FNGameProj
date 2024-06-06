#include "FortTheaterTileEditorData.h"

FFortTheaterTileEditorData::FFortTheaterTileEditorData() {
    XCoordinate = 0;
    YCoordinate = 0;
    ZoneTheme = NULL;
    Region = NULL;
    TileType = EFortTheaterMapTileType::Normal;
    bCanBeMissionAlert = false;
    bDisallowQuickplay = false;
}

