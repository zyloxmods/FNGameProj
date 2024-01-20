#pragma once
#include "CoreMinimal.h"
#include "OnBuildingTrapDurabilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBuildingTrapDurabilityChanged, float, CurrentDurability, float, MaxDurability);

