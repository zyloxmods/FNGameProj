#pragma once
#include "CoreMinimal.h"
#include "OnPickerOptionSelectionMovedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickerOptionSelectionMovedDelegate, int32, OptionDirection);

