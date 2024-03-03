#include "BuildingGameplayActorSpawnData.h"

FBuildingGameplayActorSpawnData::FBuildingGameplayActorSpawnData() {
    this->BGAIndex = 0;
    this->NumSpawnedBGAs = 0;
    this->NumBGAsToSpawn = 0;
    this->NextSpawnTime = 1;
    this->LastSpawnSide = EBuildingGameplayActorAircraftSpawnSide::None;
}

