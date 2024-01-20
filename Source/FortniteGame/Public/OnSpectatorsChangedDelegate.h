#pragma once
#include "CoreMinimal.h"
#include "OnSpectatorsChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSpectatorsChanged, int32, Num);

