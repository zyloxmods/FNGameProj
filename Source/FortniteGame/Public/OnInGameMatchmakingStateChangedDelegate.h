#pragma once
#include "CoreMinimal.h"
#include "OnInGameMatchmakingStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnInGameMatchmakingStateChanged, const FString&, NewState, const FText&, NewStateText);

