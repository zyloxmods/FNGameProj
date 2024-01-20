#pragma once
#include "CoreMinimal.h"
#include "OnEncounterStartedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterStarted, UFortAIEncounterInfo*, StartedEncounter);

