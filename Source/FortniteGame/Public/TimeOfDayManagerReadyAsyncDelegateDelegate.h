#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayManagerReadyAsyncDelegateDelegate.generated.h"

class AFortTimeOfDayManager;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeOfDayManagerReadyAsyncDelegate, AFortTimeOfDayManager*, TimeOfDayManager);

