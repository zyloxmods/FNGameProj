#include "SupplyDropZoneBasedSpawnData.h"

FSupplyDropZoneBasedSpawnData::FSupplyDropZoneBasedSpawnData() {
    NumDropsRemainingInWave = 0;
    NextWaveSpawnTime = 1;
    NextSpawnTime = 1;
    CurrGamePhase = EAthenaGamePhase::None;
    CurrSubPhase = 0;
    TotalSupplyDropsSpawnedInSubPhase = 0;
}

