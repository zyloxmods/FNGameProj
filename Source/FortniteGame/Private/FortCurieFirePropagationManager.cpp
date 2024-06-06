#include "FortCurieFirePropagationManager.h"

UFortCurieFirePropagationManager::UFortCurieFirePropagationManager() {
    TickInterval = 1;
    DefaultPropagationFuel = 0;
    PropagationApplicationMagnitude = 1;
    bUseConnectivityPointsForFireSpread = true;
    DefaultConnectivityPoints = 0;
    HalfAngleForUpwardMobilityCalculation = 1;
}

