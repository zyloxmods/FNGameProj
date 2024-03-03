#pragma once
#include "CoreMinimal.h"
#include "OnEncounterPeakStartedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterPeakStarted, UFortAIEncounterInfo*, Encounter);

