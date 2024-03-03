#pragma once
#include "CoreMinimal.h"
#include "TeamPlayerCountEntry.h"
#include "HydrogenOnTeamsOnPointChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHydrogenOnTeamsOnPointChange, const TArray<FTeamPlayerCountEntry>&, TeamsOnCapturePoint);

