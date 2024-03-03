#include "FortTheaterMapViewer.h"

void AFortTheaterMapViewer::HandleMarkedQuestsChanged() {
}

AFortTheaterMapViewer::AFortTheaterMapViewer() {
    this->HexTileWidth = 1;
    this->HexTileHeight = 1;
    this->CurrentSelectedTile = NULL;
    this->CurrentFocusedTile = NULL;
    this->NumValidHexMapTiles = 0;
    this->CurrentTileIndex = 0;
    this->bDisplayTheaterComplete = false;
}

