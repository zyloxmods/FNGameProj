#pragma once
#include "CoreMinimal.h"
#include "ReplayTimelineRangeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReplayTimelineRangeChanged, float, StartTime, float, EndTime);

