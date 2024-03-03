#pragma once
#include "CoreMinimal.h"
#include "OnEncounterSpawnedFinalEnemyDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterSpawnedFinalEnemy, UFortAIEncounterInfo*, Encounter);

