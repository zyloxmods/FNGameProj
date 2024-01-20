#pragma once
#include "CoreMinimal.h"
#include "OnDebugHUDObjectiveHeightChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDebugHUDObjectiveHeightChanged, bool, bIsDebugging);

