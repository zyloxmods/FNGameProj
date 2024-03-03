#pragma once
#include "CoreMinimal.h"
#include "OnRestrictionEnabledChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRestrictionEnabledChanged, bool, bEnabled);

