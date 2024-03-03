#pragma once
#include "CoreMinimal.h"
#include "OnGameModeShowMarkerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGameModeShowMarker, int32, PlayerId, int32, InstanceID);

