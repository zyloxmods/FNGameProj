#pragma once
#include "CoreMinimal.h"
#include "OnMinigameSetupDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigameSetup, AFortMinigame*, Minigame);

