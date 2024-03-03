#pragma once
#include "CoreMinimal.h"
#include "OnCreativeUIMetricsDisplayChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeUIMetricsDisplayChanged, int32, UIMetricsDisplayIndex);

