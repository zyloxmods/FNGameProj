#pragma once
#include "CoreMinimal.h"
#include "EMatchAbandonState.h"
#include "OnMatchAbandonStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMatchAbandonStateChanged, EMatchAbandonState, OldState, EMatchAbandonState, NewState);

