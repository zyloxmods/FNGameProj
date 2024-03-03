#pragma once
#include "CoreMinimal.h"
#include "OnPickerOptionChosenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPickerOptionChosenDelegate, int32, PickerOption);

