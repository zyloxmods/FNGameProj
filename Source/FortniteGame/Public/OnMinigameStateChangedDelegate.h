#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameState.h"
#include "OnMinigameStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigameStateChanged, EFortMinigameState, NewMinigameState);

