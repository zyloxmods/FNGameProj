#pragma once
#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"
#include "OnSurfaceTypeVehicleIsOnChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSurfaceTypeVehicleIsOnChanged, TEnumAsByte<EPhysicalSurface>, SurfaceTypeVehicleIsOn);

