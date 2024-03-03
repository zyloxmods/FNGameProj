#pragma once
#include "CoreMinimal.h"
#include "OnDonutDayNightCycleChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDonutDayNightCycleChanged, bool, bIsDay);

