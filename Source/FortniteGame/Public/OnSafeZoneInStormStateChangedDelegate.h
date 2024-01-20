#pragma once
#include "CoreMinimal.h"
#include "OnSafeZoneInStormStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSafeZoneInStormStateChanged, bool, bInStorm);

