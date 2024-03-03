#include "FortCurieFirePropagationManager.h"

UFortCurieFirePropagationManager::UFortCurieFirePropagationManager() {
    this->TickInterval = 1;
    this->DefaultPropagationFuel = 0;
    this->PropagationApplicationMagnitude = 1;
    this->bUseConnectivityPointsForFireSpread = true;
    this->DefaultConnectivityPoints = 0;
    this->HalfAngleForUpwardMobilityCalculation = 1;
}

