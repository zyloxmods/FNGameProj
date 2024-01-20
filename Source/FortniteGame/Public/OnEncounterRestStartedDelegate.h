#pragma once
#include "CoreMinimal.h"
#include "OnEncounterRestStartedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterRestStarted, UFortAIEncounterInfo*, Encounter);

