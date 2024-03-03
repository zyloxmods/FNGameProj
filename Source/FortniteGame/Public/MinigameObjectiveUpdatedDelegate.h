#pragma once
#include "CoreMinimal.h"
#include "MinigameObjectiveUpdatedDelegate.generated.h"

class UFortMinigameObjectiveComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinigameObjectiveUpdated, UFortMinigameObjectiveComponent*, Objective);

