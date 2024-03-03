#pragma once
#include "CoreMinimal.h"
#include "OnPlayerChangedClassDelegate.generated.h"

class AFortPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnPlayerChangedClass, AFortPlayerState*, PlayerState, uint8, ClassSlotIndex, uint8, OldClassSlotIndex);

