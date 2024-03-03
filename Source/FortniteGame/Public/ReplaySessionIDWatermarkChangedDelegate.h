#pragma once
#include "CoreMinimal.h"
#include "ReplaySessionIDWatermarkChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplaySessionIDWatermarkChanged, bool, bShowWatermark);

