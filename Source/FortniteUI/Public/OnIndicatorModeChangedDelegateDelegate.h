#pragma once
#include "CoreMinimal.h"
#include "OnIndicatorModeChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIndicatorModeChangedDelegate, bool, bIndicatorsEnabled);

