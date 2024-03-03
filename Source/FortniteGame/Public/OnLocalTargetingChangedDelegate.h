#pragma once
#include "CoreMinimal.h"
#include "OnLocalTargetingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLocalTargetingChanged, bool, bIsTargeting);

