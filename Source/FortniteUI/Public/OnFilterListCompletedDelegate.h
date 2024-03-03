#pragma once
#include "CoreMinimal.h"
#include "OnFilterListCompletedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFilterListCompleted, int32, NumberOfItemsInFilter);

