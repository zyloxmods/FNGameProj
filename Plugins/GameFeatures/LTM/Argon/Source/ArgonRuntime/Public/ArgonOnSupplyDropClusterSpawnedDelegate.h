#pragma once
#include "CoreMinimal.h"
#include "ArgonOnSupplyDropClusterSpawnedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FArgonOnSupplyDropClusterSpawned, uint8, NumSupplyDropClustersSpawned);

