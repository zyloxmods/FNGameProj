#include "PendingSpawnInfo.h"

FPendingSpawnInfo::FPendingSpawnInfo() {
    PawnClassToSpawn = NULL;
    SpawnPoint = NULL;
    SpawnSource = NULL;
    bSpawnedFromExternalSpawner = false;
    SpawnSetIndex = 0;
    AIType = EFortressAIType::FAT_Dormant;
    TargetPlayer = NULL;
    EncounterInfo = NULL;
    DifficultyLevel = 1;
    SpawnGroup = NULL;
    EnemyIndexInSpawnGroup = 0;
    TimeToSpawn = 1;
    bIgnoreCollision = false;
    bKillBuildingActorsAtSpawnLocation = false;
    EncounterAILifespan = 1;
    ScoreMultiplier = 1;
    bDebugSpawnedAI = false;
}

