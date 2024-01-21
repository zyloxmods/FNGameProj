#pragma once
#include "CoreMinimal.h"
#include "FortReplayFXState.h"
#include "ReplayFXStateChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FReplayFXStateChange, FFortReplayFXState, FXState);

