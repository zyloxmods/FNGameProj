#pragma once
#include "CoreMinimal.h"
#include "OnCreativeFlyingSpeedChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreativeFlyingSpeedChanged, int32, FlyingSpeedLevel, bool, bPlayFX);

