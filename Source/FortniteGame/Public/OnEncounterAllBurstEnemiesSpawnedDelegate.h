#pragma once
#include "CoreMinimal.h"
#include "OnEncounterAllBurstEnemiesSpawnedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterAllBurstEnemiesSpawned, UFortAIEncounterInfo*, Encounter);

