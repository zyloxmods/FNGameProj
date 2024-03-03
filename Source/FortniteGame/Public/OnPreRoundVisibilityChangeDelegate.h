#pragma once
#include "CoreMinimal.h"
#include "OnPreRoundVisibilityChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPreRoundVisibilityChange, bool, bNewVisibility);

