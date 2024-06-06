#include "MegaStormManager.h"

AMegaStormManager::AMegaStormManager() {
    MaxSecondsInMegaStormUpdate = 1;
    NumBuildingActorMegaStormShouldDamagePerFrame = 0;
    SleepTimeAfterDamagingBuildingActors = 1;
    MinDelayTimeBeforeDestruction = 1;
    bFloorRadiusToGridConversion = false;
    GridRadiusCellOffset = 0;
    MegaStormStartTime = 1;
    SleepTimeRemaining = 1;
}

