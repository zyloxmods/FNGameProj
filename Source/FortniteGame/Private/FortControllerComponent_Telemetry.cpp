#include "FortControllerComponent_Telemetry.h"

UFortControllerComponent_Telemetry::UFortControllerComponent_Telemetry() {
    TotalTeleports = 0;
    TotalAmmoCheats = 0;
    SpawnTime = 1;
    TotalItemsConsumed = 0;
    TotalTimesRevived = 0;
    bHasLandedFromSkyDiving = false;
    SkyDiveLandAsyncQueue = 0;
}

