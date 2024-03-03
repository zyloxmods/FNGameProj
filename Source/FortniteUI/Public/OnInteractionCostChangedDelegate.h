#pragma once
#include "CoreMinimal.h"
#include "OnInteractionCostChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteractionCostChanged, int32, InteractionCost);

