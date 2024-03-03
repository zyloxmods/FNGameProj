#pragma once
#include "CoreMinimal.h"
#include "OnCaptureProgressUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCaptureProgressUpdate, float, NewProgress);

