#include "BuildingGameplayActorSpawnData.h"

FBuildingGameplayActorSpawnData::FBuildingGameplayActorSpawnData() {
    BGAIndex = 0;
    NumSpawnedBGAs = 0;
    NumBGAsToSpawn = 0;
    NextSpawnTime = 1;
    LastSpawnSide = EBuildingGameplayActorAircraftSpawnSide::None;
}

