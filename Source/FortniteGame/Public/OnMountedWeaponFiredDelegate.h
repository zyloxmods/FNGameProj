#pragma once
#include "CoreMinimal.h"
#include "OnMountedWeaponFiredDelegate.generated.h"

class UFortVehicleSeatWeaponComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMountedWeaponFired, UFortVehicleSeatWeaponComponent*, SeatWeaponComponent, int32, SeatIndex, int32, ShotsRemaining);

