#pragma once
#include "CoreMinimal.h"
#include "OnResetMinigameComponentDelegate.generated.h"

class UFortMinigameLogicComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnResetMinigameComponent, UFortMinigameLogicComponent*, MinigameComponent);

