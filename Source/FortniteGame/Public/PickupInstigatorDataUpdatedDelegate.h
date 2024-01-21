#pragma once
#include "CoreMinimal.h"
#include "PickupInstigatorDataUpdatedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickupInstigatorDataUpdated, int32, TrackedIndex);

