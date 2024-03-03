#pragma once
#include "CoreMinimal.h"
#include "OnItemAddedToCreativeQuickbarDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemAddedToCreativeQuickbar, int32, SlotIndex);

