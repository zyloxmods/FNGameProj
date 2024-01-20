#pragma once
#include "CoreMinimal.h"
#include "ECaptureState.h"
#include "OnCapturePointStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCapturePointStateChanged, ECaptureState, CaptureState);

