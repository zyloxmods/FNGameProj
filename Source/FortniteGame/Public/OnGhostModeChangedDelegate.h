#pragma once
#include "CoreMinimal.h"
#include "OnGhostModeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGhostModeChanged, bool, bEnteredGhostMode);

