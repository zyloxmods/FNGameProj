#include "SpawnGroupInstanceInfo.h"

FSpawnGroupInstanceInfo::FSpawnGroupInstanceInfo() {
    SpawnGroup = NULL;
    NumActiveAlive = 0;
    TotalGroupCost = 0;
    SpawnPointsUsed = 0;
    NumEngaged = 0;
    bReadyToSpawn = false;
    bFinishedSpawning = false;
    EnemySpawnDataIndex = 0;
    TimeSelected = 1;
    NextEnemyToSpawnIndex = 0;
}

