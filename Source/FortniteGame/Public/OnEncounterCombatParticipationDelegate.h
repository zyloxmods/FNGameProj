#pragma once
#include "CoreMinimal.h"
#include "OnEncounterCombatParticipationDelegate.generated.h"

class UFortAIEncounterInfo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEncounterCombatParticipation, UFortAIEncounterInfo*, Encounter);

