#pragma once
#include "CoreMinimal.h"
#include "OnCrossedSplinePointDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCrossedSplinePoint, int32, SplinePointIndex, bool, bWasMovingForward);

