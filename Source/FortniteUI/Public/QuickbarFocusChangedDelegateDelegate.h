#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "QuickbarFocusChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FQuickbarFocusChangedDelegate, EFortQuickBars, QuickbarIndex, int32, Slot);

