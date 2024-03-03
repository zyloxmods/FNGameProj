#pragma once
#include "CoreMinimal.h"
#include "OnFortAthenaVehicleFuelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnFortAthenaVehicleFuelChanged, float, NewFuelPercent, float, OldFuelPercent);

