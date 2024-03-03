#pragma once
#include "CoreMinimal.h"
#include "ArsenicOnLocalGhostPlayerEnteredOrExitedVehicleDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArsenicOnLocalGhostPlayerEnteredOrExitedVehicle, const bool, bIsInVehicle);

