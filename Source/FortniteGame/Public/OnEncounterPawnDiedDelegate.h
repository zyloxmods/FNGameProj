#pragma once
#include "CoreMinimal.h"
#include "OnEncounterPawnDiedDelegate.generated.h"

class AFortAIPawn;
class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEncounterPawnDied, UFortAIEncounterInfo*, Encounter, AFortAIPawn*, DeadPawn);

