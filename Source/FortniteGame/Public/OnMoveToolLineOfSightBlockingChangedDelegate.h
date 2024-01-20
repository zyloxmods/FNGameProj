#pragma once
#include "CoreMinimal.h"
#include "EHitTraceRule.h"
#include "OnMoveToolLineOfSightBlockingChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveToolLineOfSightBlockingChanged, EHitTraceRule, HitTraceRule);

