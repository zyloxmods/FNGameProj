#pragma once
#include "CoreMinimal.h"
#include "EFortReplayEventType.h"
#include "ReplayTimelineMarkerAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FReplayTimelineMarkerAdded, EFortReplayEventType, EventType, float, TimeRatio, int32, MarkerIdx);

