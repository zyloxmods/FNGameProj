#pragma once
#include "CoreMinimal.h"
#include "OnSafeZoneOccupancyChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSafeZoneOccupancyChanged, bool, bIsInSafeZone);

