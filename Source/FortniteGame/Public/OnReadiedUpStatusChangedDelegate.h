#pragma once
#include "CoreMinimal.h"
#include "OnReadiedUpStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnReadiedUpStatusChanged, bool, bReadiedUp);

