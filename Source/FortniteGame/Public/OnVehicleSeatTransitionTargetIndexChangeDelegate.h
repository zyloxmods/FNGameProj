#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSeatTransitionTargetIndexChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleSeatTransitionTargetIndexChange, int32, SeatIndex);

