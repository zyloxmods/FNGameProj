#include "FortAthenaAISpawnerDataComponent_SpawnParamsBase.h"
#include "Templates/SubclassOf.h"

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldCheckForOverlaps_Implementation() {
    return false;
}

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnTracePadding_Implementation() {
    return 0.0f;
}

TArray<TSubclassOf<UFortAthenaAISpawnerData>> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnerDataSpawnedAsChildren_Implementation() {
    return TArray<TSubclassOf<UFortAthenaAISpawnerData>>();
}

TSubclassOf<APawn> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnClass_Implementation() {
    return NULL;
}

UFortAthenaAISpawnerDataComponent_SpawnParamsBase::UFortAthenaAISpawnerDataComponent_SpawnParamsBase() {
}

