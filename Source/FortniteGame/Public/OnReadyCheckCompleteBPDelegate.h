#pragma once
#include "CoreMinimal.h"
#include "OnReadyCheckCompleteBPDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadyCheckCompleteBP, bool, Result);

