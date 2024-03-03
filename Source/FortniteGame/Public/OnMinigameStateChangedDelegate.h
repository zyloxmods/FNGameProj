#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameState.h"
#include "OnMinigameStateChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnMinigameStateChanged, AFortMinigame*, Minigame, EFortMinigameState, NewMinigameState);

