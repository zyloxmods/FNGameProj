#pragma once
#include "CoreMinimal.h"
#include "OnVehicleExplodedDelegate.generated.h"

class AFortDagwoodVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleExploded, AFortDagwoodVehicle*, Vehicle);

