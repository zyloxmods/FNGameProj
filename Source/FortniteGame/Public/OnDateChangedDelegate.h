#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnDateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDateChanged, FDateTime, DateValue);

