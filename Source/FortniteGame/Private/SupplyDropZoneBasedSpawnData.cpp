#include "SupplyDropZoneBasedSpawnData.h"

FSupplyDropZoneBasedSpawnData::FSupplyDropZoneBasedSpawnData() {
    this->NumDropsRemainingInWave = 0;
    this->NextWaveSpawnTime = 1;
    this->NextSpawnTime = 1;
    this->CurrGamePhase = EAthenaGamePhase::None;
    this->CurrSubPhase = 0;
    this->TotalSupplyDropsSpawnedInSubPhase = 0;
}

