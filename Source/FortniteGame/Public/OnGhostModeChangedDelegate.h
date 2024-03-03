#pragma once
#include "CoreMinimal.h"
#include "OnGhostModeChangedDelegate.generated.h"

class AFortPlayerControllerGameplay;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnGhostModeChanged, AFortPlayerControllerGameplay*, PlayerController, bool, bEnteredGhostMode);

