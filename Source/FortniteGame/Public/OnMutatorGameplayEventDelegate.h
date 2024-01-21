#pragma once
#include "CoreMinimal.h"
#include "OnMutatorGameplayEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnMutatorGameplayEvent, int32, EventId, int32, EventParam1, int32, EventParam2, int32, EventParam3);

