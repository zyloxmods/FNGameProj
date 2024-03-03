#pragma once
#include "CoreMinimal.h"
#include "OnMinigameAssignmentChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigameAssignmentChanged, AFortMinigame*, Minigame);

