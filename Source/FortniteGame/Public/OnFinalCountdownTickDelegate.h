#pragma once
#include "CoreMinimal.h"
#include "OnFinalCountdownTickDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinalCountdownTick, int32, SecondsRemaining);

