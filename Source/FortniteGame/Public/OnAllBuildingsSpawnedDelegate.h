#pragma once
#include "CoreMinimal.h"
#include "OnAllBuildingsSpawnedDelegate.generated.h"

class ABuildingActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAllBuildingsSpawned, const TArray<ABuildingActor*>&, SpawnedBuildings);

