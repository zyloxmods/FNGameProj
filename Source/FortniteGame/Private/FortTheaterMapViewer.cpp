#include "FortTheaterMapViewer.h"

void AFortTheaterMapViewer::HandleMarkedQuestsChanged() {
}

AFortTheaterMapViewer::AFortTheaterMapViewer() {
    HexTileWidth = 1;
    HexTileHeight = 1;
    CurrentSelectedTile = NULL;
    CurrentFocusedTile = NULL;
    NumValidHexMapTiles = 0;
    CurrentTileIndex = 0;
    bDisplayTheaterComplete = false;
}

