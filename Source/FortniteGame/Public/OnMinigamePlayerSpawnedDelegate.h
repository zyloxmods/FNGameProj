#pragma once
#include "CoreMinimal.h"
#include "OnMinigamePlayerSpawnedDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigamePlayerSpawned, AFortPlayerController*, SpawningPlayer);

