#pragma once
#include "CoreMinimal.h"
#include "OnCursorModeChangingDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCursorModeChangingDelegate, bool, bCursorModeEnabled, FName, ActionName);

