#pragma once
#include "CoreMinimal.h"
#include "OnEncounterEnemySpawnFailedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterEnemySpawnFailed, UFortAIEncounterInfo*, Encounter);

