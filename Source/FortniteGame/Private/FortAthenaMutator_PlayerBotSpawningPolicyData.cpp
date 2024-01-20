#include "FortAthenaMutator_PlayerBotSpawningPolicyData.h"

UFortAthenaMutator_PlayerBotSpawningPolicyData::UFortAthenaMutator_PlayerBotSpawningPolicyData() {
    this->PlayerBotPawn = NULL;
    this->CachedGameMode = NULL;
    this->MaxTraceHeight = 5000.00f;
    this->MinTraceHeight = -5000.00f;
    this->InitialSpawnDelay = 0.10f;
    this->SpawnDelay = 0.10f;
}

