#include "FortCurieElectricityPropagationManager.h"

UFortCurieElectricityPropagationManager::UFortCurieElectricityPropagationManager() {
    DefaultPropagationDepthLimit = 0;
    PropagationTimeDelay = 1;
    bIncludeGridActorsFromOctree = false;
    bAllowNonConductiveGridInterrupt = false;
    bApplyToNonConductiveNeighbors = true;
    ElectricGridWarningLimit = 0;
    ElectricGridHighWaterMark = 0;
    ApplicationMapDefaultSlack = 0;
    NeighborCacheDefaultSlack = 0;
    MaxDeltaTimePerFrame = 1;
}

