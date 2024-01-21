#pragma once
#include "CoreMinimal.h"
#include "OnEncounterEndedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterEnded, UFortAIEncounterInfo*, StoppedEncounter);

