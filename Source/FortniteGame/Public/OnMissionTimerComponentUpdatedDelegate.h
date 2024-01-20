#pragma once
#include "CoreMinimal.h"
#include "OnMissionTimerComponentUpdatedDelegate.generated.h"

class UFortMissionTimerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMissionTimerComponentUpdated, UFortMissionTimerComponent*, TimerComponent);

