#pragma once
#include "CoreMinimal.h"
#include "OnPlayModeChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayModeChanged, AFortMinigame*, Minigame, bool, bIsInPlayMode);

