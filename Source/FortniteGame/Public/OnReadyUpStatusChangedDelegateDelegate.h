#pragma once
#include "CoreMinimal.h"
#include "OnReadyUpStatusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadyUpStatusChangedDelegate, bool, bReadyStatus);

