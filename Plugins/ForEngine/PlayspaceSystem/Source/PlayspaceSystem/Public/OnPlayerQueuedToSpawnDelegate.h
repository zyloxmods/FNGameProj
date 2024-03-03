#pragma once
#include "CoreMinimal.h"
#include "ReplicatedSpawnInfo.h"
#include "OnPlayerQueuedToSpawnDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerQueuedToSpawn, APlayerController*, Controller, const FReplicatedSpawnInfo&, SpawnInfo);

