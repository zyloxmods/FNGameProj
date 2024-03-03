#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingCompleteResult.h"
#include "OnMatchmakingCompletedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMatchmakingCompletedDelegate, EMatchmakingCompleteResult, Result);

