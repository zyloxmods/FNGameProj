#pragma once
#include "CoreMinimal.h"
#include "OnEncounterRiftSpawnedDelegate.generated.h"

class ABuildingRift;
class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEncounterRiftSpawned, UFortAIEncounterInfo*, Encounter, ABuildingRift*, Rift);

