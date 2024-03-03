#pragma once
#include "CoreMinimal.h"
#include "OnThrottleCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnThrottleComplete, bool, Succeeded);

