#pragma once
#include "CoreMinimal.h"
#include "OnMoveToolScaleInsteadOfRotateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolScaleInsteadOfRotateChanged, bool, bScalingOn);

