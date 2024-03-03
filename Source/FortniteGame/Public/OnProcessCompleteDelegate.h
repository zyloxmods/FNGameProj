#pragma once
#include "CoreMinimal.h"
#include "OnProcessCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnProcessComplete, bool, WasCancelled);

