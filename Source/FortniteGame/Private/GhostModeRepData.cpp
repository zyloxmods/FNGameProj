#include "GhostModeRepData.h"

FGhostModeRepData::FGhostModeRepData() {
    bInGhostMode = false;
    GhostModeItemDef = NULL;
    PreviousFocusedSlot = 0;
    TimeExitedGhostMode = 1;
}

