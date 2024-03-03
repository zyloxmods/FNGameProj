#pragma once
#include "CoreMinimal.h"
#include "OnToggleScoreboardDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnToggleScoreboardDelegate, bool, bEnabled);

