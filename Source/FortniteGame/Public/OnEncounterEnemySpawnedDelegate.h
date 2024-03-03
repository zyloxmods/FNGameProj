#pragma once
#include "CoreMinimal.h"
#include "OnEncounterEnemySpawnedDelegate.generated.h"

class AFortAIPawn;
class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEncounterEnemySpawned, UFortAIEncounterInfo*, Encounter, AFortAIPawn*, SpawnedEnemy);

