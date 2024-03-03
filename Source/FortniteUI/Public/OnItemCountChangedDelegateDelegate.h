#pragma once
#include "CoreMinimal.h"
#include "OnItemCountChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemCountChangedDelegate, int32, Count);

