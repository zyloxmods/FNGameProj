#include "MegaStormManager.h"

AMegaStormManager::AMegaStormManager() {
    this->MaxSecondsInMegaStormUpdate = 1;
    this->NumBuildingActorMegaStormShouldDamagePerFrame = 0;
    this->SleepTimeAfterDamagingBuildingActors = 1;
    this->MinDelayTimeBeforeDestruction = 1;
    this->bFloorRadiusToGridConversion = false;
    this->GridRadiusCellOffset = 0;
    this->MegaStormStartTime = 1;
    this->SleepTimeRemaining = 1;
}

