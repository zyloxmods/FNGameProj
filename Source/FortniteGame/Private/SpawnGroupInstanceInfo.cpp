#include "SpawnGroupInstanceInfo.h"

FSpawnGroupInstanceInfo::FSpawnGroupInstanceInfo() {
    this->SpawnGroup = NULL;
    this->NumActiveAlive = 0;
    this->TotalGroupCost = 0;
    this->SpawnPointsUsed = 0;
    this->NumEngaged = 0;
    this->bReadyToSpawn = false;
    this->bFinishedSpawning = false;
    this->EnemySpawnDataIndex = 0;
    this->TimeSelected = 0.00f;
    this->NextEnemyToSpawnIndex = 0;
}

