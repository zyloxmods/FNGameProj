#pragma once
#include "CoreMinimal.h"
#include "OnPlayerClassEventDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerClassEvent, AFortPlayerState*, PlayerState, uint8, ClassSlotIndex);

