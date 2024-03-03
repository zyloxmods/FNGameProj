#pragma once
#include "CoreMinimal.h"
#include "OnBigHitPointStatChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBigHitPointStatChanged, FText, HitPointText, float, HealthPercent);

