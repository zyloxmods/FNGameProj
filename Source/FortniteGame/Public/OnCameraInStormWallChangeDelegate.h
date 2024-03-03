#pragma once
#include "CoreMinimal.h"
#include "OnCameraInStormWallChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCameraInStormWallChange, bool, bInStormWall);

