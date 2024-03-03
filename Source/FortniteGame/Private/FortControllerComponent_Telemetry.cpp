#include "FortControllerComponent_Telemetry.h"

UFortControllerComponent_Telemetry::UFortControllerComponent_Telemetry() {
    this->TotalTeleports = 0;
    this->TotalAmmoCheats = 0;
    this->SpawnTime = 1;
    this->TotalItemsConsumed = 0;
    this->TotalTimesRevived = 0;
    this->bHasLandedFromSkyDiving = false;
    this->SkyDiveLandAsyncQueue = 0;
}

