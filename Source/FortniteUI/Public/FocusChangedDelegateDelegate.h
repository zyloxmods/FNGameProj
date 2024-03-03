#pragma once
#include "CoreMinimal.h"
#include "FocusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFocusChangedDelegate, bool, bIsFocused);

