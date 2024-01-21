#pragma once
#include "CoreMinimal.h"
#include "OnInputActionHoldStoppedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInputActionHoldStopped, FName, InputActionName, bool, bCompletedSuccessfully);

