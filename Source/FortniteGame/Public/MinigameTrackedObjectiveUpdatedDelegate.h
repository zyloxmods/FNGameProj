#pragma once
#include "CoreMinimal.h"
#include "MinigameTrackedObjectiveUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMinigameTrackedObjectiveUpdated, int32, TrackedIndex);

