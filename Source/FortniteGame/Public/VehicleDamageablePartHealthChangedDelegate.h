#pragma once
#include "CoreMinimal.h"
#include "VehicleDamageablePart.h"
#include "VehicleDamageablePartConfig.h"
#include "VehicleDamageablePartHealthChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FVehicleDamageablePartHealthChanged, const FVehicleDamageablePartConfig&, PartConfig, const FVehicleDamageablePart&, Part, const bool, bNewlyDisabled, const bool, bNewlyEnabled);

