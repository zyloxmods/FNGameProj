#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolPrecisionChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMoveToolPrecisionChanged, bool, bPrecisionOn, uint8, GridSnapIndex);

