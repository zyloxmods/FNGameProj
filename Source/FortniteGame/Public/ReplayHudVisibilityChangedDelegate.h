#pragma once
#include "CoreMinimal.h"
#include "EHudVisibilityState.h"
#include "ReplayHudVisibilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayHudVisibilityChanged, const EHudVisibilityState, IsVisible);

