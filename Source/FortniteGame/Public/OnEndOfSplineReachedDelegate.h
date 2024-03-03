#pragma once
#include "CoreMinimal.h"
#include "OnEndOfSplineReachedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEndOfSplineReached, bool, bHitEndOfSpline);

