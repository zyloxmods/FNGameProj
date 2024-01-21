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
    this->DifficultyLevel = 0.00f;
    this->SpawnGroup = NULL;
    this->EnemyIndexInSpawnGroup = 0;
    this->TimeToSpawn = 0.00f;
    this->bIgnoreCollision = false;
    this->bKillBuildingActorsAtSpawnLocation = false;
    this->EncounterAILifespan = 0.00f;
    this->ScoreMultiplier = 0.00f;
    this->bDebugSpawnedAI = false;
}

