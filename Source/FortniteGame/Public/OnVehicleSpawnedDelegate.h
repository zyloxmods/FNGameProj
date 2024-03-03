#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSpawnedDelegate.generated.h"

class AFortAthenaVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleSpawned, AFortAthenaVehicle*, Vehicle);

