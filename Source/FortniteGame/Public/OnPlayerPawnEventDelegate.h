#pragma once
#include "CoreMinimal.h"
#include "OnPlayerPawnEventDelegate.generated.h"

class AFortPlayerPawn;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPawnEvent, AFortPlayerPawn*, PlayerPawn);

