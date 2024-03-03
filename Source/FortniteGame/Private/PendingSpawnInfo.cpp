#include "PendingSpawnInfo.h"

FPendingSpawnInfo::FPendingSpawnInfo() {
    this->PawnClassToSpawn = NULL;
    this->SpawnPoint = NULL;
    this->SpawnSource = NULL;
    this->bSpawnedFromExternalSpawner = false;
    this->SpawnSetIndex = 0;
    this->AIType = EFortressAIType::FAT_Dormant;
    this->TargetPlayer = NULL;
    this->EncounterInfo = NULL;
    this->DifficultyLevel = 1;
    this->SpawnGroup = NULL;
    this->EnemyIndexInSpawnGroup = 0;
    this->TimeToSpawn = 1;
    this->bIgnoreCollision = false;
    this->bKillBuildingActorsAtSpawnLocation = false;
    this->EncounterAILifespan = 1;
    this->ScoreMultiplier = 1;
    this->bDebugSpawnedAI = false;
}

