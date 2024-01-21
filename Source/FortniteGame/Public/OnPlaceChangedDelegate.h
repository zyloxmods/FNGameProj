#pragma once
#include "CoreMinimal.h"
#include "OnPlaceChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlaceChanged, int32, NewPlace);

