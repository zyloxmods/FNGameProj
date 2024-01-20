#pragma once
#include "CoreMinimal.h"
#include "OnEncounterFadeStartedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterFadeStarted, UFortAIEncounterInfo*, Encounter);

