#pragma once
#include "CoreMinimal.h"
#include "OnShowTemperatureChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowTemperatureChange, bool, bShowTemperature);

