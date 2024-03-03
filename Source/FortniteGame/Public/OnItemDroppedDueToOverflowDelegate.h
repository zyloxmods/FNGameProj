#pragma once
#include "CoreMinimal.h"
#include "OnItemDroppedDueToOverflowDelegate.generated.h"

class UFortWorldItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnItemDroppedDueToOverflow, const UFortWorldItem*, ItemDropped);

