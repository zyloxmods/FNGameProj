#pragma once
#include "CoreMinimal.h"
#include "ConsoleAccountPickerResultDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FConsoleAccountPickerResult, const int32, ControllerIndex, const bool, bUserSwitched);

