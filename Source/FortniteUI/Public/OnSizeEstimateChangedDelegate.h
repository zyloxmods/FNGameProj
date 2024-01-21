#pragma once
#include "CoreMinimal.h"
#include "OnSizeEstimateChangedDelegate.generated.h"

class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSizeEstimateChanged, UObject*, ChangedElement);

