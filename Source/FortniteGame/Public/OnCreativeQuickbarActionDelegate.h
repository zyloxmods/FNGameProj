#pragma once
#include "CoreMinimal.h"
#include "OnCreativeQuickbarActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreativeQuickbarAction, int32, SlotIndex);

