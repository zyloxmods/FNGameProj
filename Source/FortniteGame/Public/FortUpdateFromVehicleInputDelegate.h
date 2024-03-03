#pragma once
#include "CoreMinimal.h"
#include "FortAthenaVehicleInputState.h"
#include "FortUpdateFromVehicleInputDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortUpdateFromVehicleInput, float, DeltaSeconds, const FFortAthenaVehicleInputState&, VehicleInputState);

