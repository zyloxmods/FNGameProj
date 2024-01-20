#pragma once
#include "CoreMinimal.h"
#include "OnHandleMatchLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHandleMatchLevelChanged, int32, MatchLevel);

