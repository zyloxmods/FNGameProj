#pragma once
#include "CoreMinimal.h"
#include "OnPlayerStartedRespawnDelegate.generated.h"

class AFortPlayerControllerZone;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerStartedRespawn, AFortPlayerControllerZone*, PlayerController);

