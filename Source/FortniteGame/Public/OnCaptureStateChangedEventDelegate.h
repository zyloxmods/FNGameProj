#pragma once
#include "CoreMinimal.h"
#include "ECaptureState.h"
#include "OnCaptureStateChangedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCaptureStateChangedEvent, ECaptureState, NewCaptureState, ECaptureState, PreviousCaptureState);

