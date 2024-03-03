#pragma once
#include "CoreMinimal.h"
#include "OnTimerObjectiveUpdatedDelegate.generated.h"

class AFortCreativeTimerObjective;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTimerObjectiveUpdated, const AFortCreativeTimerObjective*, TimerObjective);

