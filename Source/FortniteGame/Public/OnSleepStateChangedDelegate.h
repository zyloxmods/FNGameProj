#pragma once
#include "CoreMinimal.h"
#include "OnSleepStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSleepStateChanged, const bool, bIsAwake);

