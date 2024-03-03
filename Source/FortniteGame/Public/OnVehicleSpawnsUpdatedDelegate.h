#pragma once
#include "CoreMinimal.h"
#include "OnVehicleSpawnsUpdatedDelegate.generated.h"

class AActor;
class UFortVehicleItemDefinition;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnVehicleSpawnsUpdated, UFortVehicleItemDefinition*, VehicleItemDef, TArray<AActor*>&, SpawnedVehicles, int32, NewVehicleCount);

