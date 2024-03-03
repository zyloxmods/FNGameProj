#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameEnd.h"
#include "EFortMinigameState.h"
#include "OnMinigameEndGameDelegate.generated.h"

class AFortPlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMinigameEndGame, AFortPlayerController*, InstigatorPC, EFortMinigameEnd, EndMethod, EFortMinigameState, NextState);

