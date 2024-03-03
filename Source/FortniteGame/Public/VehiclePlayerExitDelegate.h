#pragma once
#include "CoreMinimal.h"
#include "VehiclePlayerExitDelegate.generated.h"

class AFortAthenaVehicle;
class AFortPlayerControllerAthena;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FVehiclePlayerExit, const AFortPlayerControllerAthena*, Controller, AFortAthenaVehicle*, Vehicle);

