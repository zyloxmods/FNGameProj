#pragma once
#include "CoreMinimal.h"
#include "OnRespawnTimeRemainingUpdateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRespawnTimeRemainingUpdate, int32, TimeLeft);

