#pragma once
#include "CoreMinimal.h"
#include "ECapturePointState.h"
#include "OnCaptureStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCaptureStateChanged, ECapturePointState, CaptureState);

