#pragma once
#include "CoreMinimal.h"
#include "OnMatchmakingFlowChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakingFlowChangeDelegate, bool, bIsActive);

