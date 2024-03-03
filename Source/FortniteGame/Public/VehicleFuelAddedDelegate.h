#pragma once
#include "CoreMinimal.h"
#include "VehicleFuelAddedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVehicleFuelAdded, float, NewFuelPercent);

