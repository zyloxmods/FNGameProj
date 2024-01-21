#pragma once
#include "CoreMinimal.h"
#include "OnEventStartedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEventStartedSignature, int32, NuberOfWaves, float, EventDuration, float, WarmupDuration);

