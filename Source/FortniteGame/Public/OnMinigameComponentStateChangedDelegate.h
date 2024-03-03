#pragma once
#include "CoreMinimal.h"
#include "OnMinigameComponentStateChangedDelegate.generated.h"

class UFortMinigameLogicComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigameComponentStateChanged, UFortMinigameLogicComponent*, MinigameComponent);

