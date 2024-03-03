#include "FortAthenaMutator_PlayerBotSpawningPolicyData.h"

UFortAthenaMutator_PlayerBotSpawningPolicyData::UFortAthenaMutator_PlayerBotSpawningPolicyData() {
    this->bUseCustomizationInEditor = false;
    this->PlayerBotPawn = NULL;
    this->StartupInventory = NULL;
    this->CachedGameMode = NULL;
    this->MaxTraceHeight = 1;
    this->MinTraceHeight = 1;
    this->InitialSpawnDelay = 1;
    this->SpawnDelay = 1;
    this->AISpawnerData = NULL;
}

