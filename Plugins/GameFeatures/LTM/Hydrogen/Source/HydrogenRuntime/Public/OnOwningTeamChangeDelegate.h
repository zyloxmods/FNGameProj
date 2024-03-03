#pragma once
#include "CoreMinimal.h"
#include "OnOwningTeamChangeDelegate.generated.h"

class AHydrogenObjectiveActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnOwningTeamChange, AHydrogenObjectiveActor*, Objective, uint8, NewTeam, uint8, OldTeam);

