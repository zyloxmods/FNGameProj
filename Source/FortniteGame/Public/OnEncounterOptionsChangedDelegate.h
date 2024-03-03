#pragma once
#include "CoreMinimal.h"
#include "OnEncounterOptionsChangedDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterOptionsChanged, UFortAIEncounterInfo*, Encounter);

