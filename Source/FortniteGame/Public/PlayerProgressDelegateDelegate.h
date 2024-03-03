#pragma once
#include "CoreMinimal.h"
#include "PlayerProgressDelegateDelegate.generated.h"

class APlayerState;
class UFortMinigameProgressComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerProgressDelegate, APlayerState*, PlayerState, UFortMinigameProgressComponent*, Progress);

