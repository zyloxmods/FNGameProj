#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnVehicleCountByTagChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnVehicleCountByTagChanged, FGameplayTag, VehicleTag, int32, NewVehicleCount);

