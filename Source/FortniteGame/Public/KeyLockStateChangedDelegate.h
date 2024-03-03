#pragma once
#include "CoreMinimal.h"
#include "ECreativeKeyLockState.h"
#include "KeyLockStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKeyLockStateChanged, ECreativeKeyLockState, NewState);

