#pragma once
#include "CoreMinimal.h"
#include "ReplayLevelStreamingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayLevelStreamingChanged, bool, bStreaming);

