#include "FortPostGameScreenConfig.h"

FFortPostGameScreenConfig::FFortPostGameScreenConfig() {
    this->ClickCatcherState = EPostGameClickCatcherMode::Catch_None;
    this->PostGameHUDMode = EPostGameHUDMode::None;
    this->bSohwCinematicBars = false;
    this->bShowPlacementOverlay = false;
}

