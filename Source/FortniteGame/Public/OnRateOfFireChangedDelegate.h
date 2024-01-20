#pragma once
#include "CoreMinimal.h"
#include "OnRateOfFireChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRateOfFireChanged, float, NewRateOfFire);

