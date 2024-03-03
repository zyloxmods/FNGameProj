#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "OnNotifyInputFilteredDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnNotifyInputFiltered, ECommonInputType, AttemptedInputType);

