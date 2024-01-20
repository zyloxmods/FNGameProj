#pragma once
#include "CoreMinimal.h"
#include "OnMapExplorationThresholdReachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMapExplorationThresholdReached, int32, ThresholdIndex, uint8, Team);

