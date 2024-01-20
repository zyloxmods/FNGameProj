#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarSlotContentChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreativeQuickbarSlotContentChanged, int32, SlotIndex, bool, bHasContent);

