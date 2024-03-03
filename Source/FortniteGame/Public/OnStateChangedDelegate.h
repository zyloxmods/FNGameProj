#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameState.h"
#include "OnStateChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStateChanged, AFortMinigame*, Minigame, EFortMinigameState, MinigameState);

