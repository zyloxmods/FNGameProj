#pragma once
#include "CoreMinimal.h"
#include "OnMinigameHideHUDDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMinigameHideHUD, bool, bHideHUD);

