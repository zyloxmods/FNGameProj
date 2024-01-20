#include "SupplyDropZoneBasedSpawnData.h"

FSupplyDropZoneBasedSpawnData::FSupplyDropZoneBasedSpawnData() {
    this->NumDropsRemainingInWave = 0;
    this->NextWaveSpawnTime = 0.00f;
    this->NextSpawnTime = 0.00f;
    this->CurrGamePhase = EAthenaGamePhase::None;
    this->CurrSubPhase = 0;
    this->TotalSupplyDropsSpawnedInSubPhase = 0;
}

