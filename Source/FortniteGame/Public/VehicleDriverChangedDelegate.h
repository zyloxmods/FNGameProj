#pragma once
#include "CoreMinimal.h"
#include "VehicleDriverChangedDelegate.generated.h"

class AFortAthenaVehicle;
class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehicleDriverChanged, const AFortPlayerControllerAthena*, NewController, AFortAthenaVehicle*, Vehicle);

