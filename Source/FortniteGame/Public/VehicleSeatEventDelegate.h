#pragma once
#include "CoreMinimal.h"
#include "VehicleSeatEventDelegate.generated.h"

class AFortPawn;
class IFortVehicleInterface;
class UFortVehicleInterface;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FVehicleSeatEvent, const TScriptInterface<IFortVehicleInterface>&, Vehicle, AFortPawn*, PlayerPawn, int32, SeatIndex);

