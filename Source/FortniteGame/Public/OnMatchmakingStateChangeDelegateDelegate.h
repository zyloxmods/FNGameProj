#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingState.h"
#include "OnMatchmakingStateChangeDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchmakingStateChangeDelegate, TEnumAsByte<EMatchmakingState::Type>, OldState, TEnumAsByte<EMatchmakingState::Type>, NewState);

