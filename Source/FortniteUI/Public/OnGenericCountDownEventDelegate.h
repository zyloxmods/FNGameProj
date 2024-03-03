#pragma once
#include "CoreMinimal.h"
#include "OnGenericCountDownEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGenericCountDownEvent, FText, CountDownEventDisplayText, float, TimeRemaining);

