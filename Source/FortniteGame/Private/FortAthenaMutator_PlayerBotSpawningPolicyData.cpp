#include "FortAthenaMutator_PlayerBotSpawningPolicyData.h"

UFortAthenaMutator_PlayerBotSpawningPolicyData::UFortAthenaMutator_PlayerBotSpawningPolicyData() {
    bUseCustomizationInEditor = false;
    PlayerBotPawn = NULL;
    StartupInventory = NULL;
    CachedGameMode = NULL;
    MaxTraceHeight = 1;
    MinTraceHeight = 1;
    InitialSpawnDelay = 1;
    SpawnDelay = 1;
    AISpawnerData = NULL;
}

