#include "FortCurieElectricityPropagationManager.h"

UFortCurieElectricityPropagationManager::UFortCurieElectricityPropagationManager() {
    this->DefaultPropagationDepthLimit = 0;
    this->PropagationTimeDelay = 1;
    this->bIncludeGridActorsFromOctree = false;
    this->bAllowNonConductiveGridInterrupt = false;
    this->bApplyToNonConductiveNeighbors = true;
    this->ElectricGridWarningLimit = 0;
    this->ElectricGridHighWaterMark = 0;
    this->ApplicationMapDefaultSlack = 0;
    this->NeighborCacheDefaultSlack = 0;
    this->MaxDeltaTimePerFrame = 1;
}

