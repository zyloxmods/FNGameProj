#pragma once
#include "CoreMinimal.h"
#include "OnEncounterSpawnDirectionsChosenDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterSpawnDirectionsChosen, UFortAIEncounterInfo*, Encounter);

