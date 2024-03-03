#pragma once
#include "CoreMinimal.h"
#include "EHoagieBoostState.h"
#include "HoagieBoostStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHoagieBoostStateDelegate, EHoagieBoostState, State);

