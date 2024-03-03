#pragma once
#include "CoreMinimal.h"
#include "ELockState.h"
#include "LockStateChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLockStateChangeEvent, ELockState, NewLockState);

