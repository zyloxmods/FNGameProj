#pragma once
#include "CoreMinimal.h"
#include "ItemCollectorVehicleSpawnedDelegate.generated.h"

class AFortAthenaVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FItemCollectorVehicleSpawned, AFortAthenaVehicle*, Vehicle);

