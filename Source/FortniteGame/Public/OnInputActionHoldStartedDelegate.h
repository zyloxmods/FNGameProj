#pragma once
#include "CoreMinimal.h"
#include "OnInputActionHoldStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputActionHoldStarted, FName, InputActionName, float, Duration);

