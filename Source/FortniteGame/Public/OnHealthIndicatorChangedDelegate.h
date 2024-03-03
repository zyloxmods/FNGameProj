#pragma once
#include "CoreMinimal.h"
#include "EPlayerIndicatorDisplayMode.h"
#include "OnHealthIndicatorChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthIndicatorChanged, EPlayerIndicatorDisplayMode, DisplayMode);

