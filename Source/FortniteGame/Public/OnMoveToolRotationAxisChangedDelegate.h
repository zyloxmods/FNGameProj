#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolRotationAxisChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolRotationAxisChanged, uint8, RotationAxisIndex);

