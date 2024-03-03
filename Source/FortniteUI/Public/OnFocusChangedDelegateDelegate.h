#pragma once
#include "CoreMinimal.h"
#include "OnFocusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusChangedDelegate, bool, bIsFocused);

