#pragma once
#include "CoreMinimal.h"
#include "OnMissionTimerTimeAddedOrRemovedDelegate.generated.h"

class UFortMissionTimerComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMissionTimerTimeAddedOrRemoved, UFortMissionTimerComponent*, TimerComponent, float, TimeAdded);

