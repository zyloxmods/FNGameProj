#pragma once
#include "CoreMinimal.h"
#include "OnVehicleFocusedDelegate.generated.h"

class AFortAthenaVehicle;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVehicleFocused, AFortAthenaVehicle*, FocusedVehicle);

