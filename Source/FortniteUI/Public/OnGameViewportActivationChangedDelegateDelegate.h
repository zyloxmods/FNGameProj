#pragma once
#include "CoreMinimal.h"
#include "OnGameViewportActivationChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameViewportActivationChangedDelegate, bool, bHasFocus);

