#include "GhostModeRepData.h"

FGhostModeRepData::FGhostModeRepData() {
    this->bInGhostMode = false;
    this->GhostModeItemDef = NULL;
    this->PreviousFocusedSlot = 0;
    this->TimeExitedGhostMode = 1;
}

