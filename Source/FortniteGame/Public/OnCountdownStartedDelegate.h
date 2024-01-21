#pragma once
#include "CoreMinimal.h"
#include "OnCountdownStartedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCountdownStarted, int32, SecondsRemaining);

