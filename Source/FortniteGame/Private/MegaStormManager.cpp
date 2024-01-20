#include "MegaStormManager.h"

AMegaStormManager::AMegaStormManager() {
    this->MaxSecondsInMegaStormUpdate = 0.02f;
    this->NumBuildingActorMegaStormShouldDamagePerFrame = 10;
    this->SleepTimeAfterDamagingBuildingActors = 0.00f;
    this->MinDelayTimeBeforeDestruction = 0.50f;
    this->bFloorRadiusToGridConversion = false;
    this->GridRadiusCellOffset = 0;
    this->MegaStormStartTime = 0.00f;
    this->SleepTimeRemaining = 0.00f;
}

