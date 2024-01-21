#include "FortTheaterMapViewer.h"

void AFortTheaterMapViewer::HandleMarkedQuestsChanged() {
}

AFortTheaterMapViewer::AFortTheaterMapViewer() {
    this->HexTileWidth = 591.20f;
    this->HexTileHeight = 512.00f;
    this->CurrentSelectedTile = NULL;
    this->CurrentFocusedTile = NULL;
    this->NumValidHexMapTiles = 0;
}

