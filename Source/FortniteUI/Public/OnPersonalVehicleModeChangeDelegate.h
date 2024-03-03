#pragma once
#include "CoreMinimal.h"
#include "OnPersonalVehicleModeChangeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPersonalVehicleModeChange, bool, bEnteredVehicle);

