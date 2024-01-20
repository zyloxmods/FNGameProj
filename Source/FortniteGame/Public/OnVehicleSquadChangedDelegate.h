#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSquadChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleSquadChanged, uint8, OldID, uint8, NewID);

