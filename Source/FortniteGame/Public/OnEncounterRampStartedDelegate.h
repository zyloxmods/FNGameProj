#pragma once
#include "CoreMinimal.h"
#include "OnEncounterRampStartedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterRampStarted, UFortAIEncounterInfo*, Encounter);

