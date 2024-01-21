#pragma once
#include "CoreMinimal.h"
#include "OnFinalCountdownStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinalCountdownStarted, int32, SecondsRemaining);

