#pragma once
#include "CoreMinimal.h"
#include "OnCurrentRoundChangedDelegate.generated.h"

class AFortMinigame;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCurrentRoundChanged, AFortMinigame*, Minigame, int32, CurrentRound);

