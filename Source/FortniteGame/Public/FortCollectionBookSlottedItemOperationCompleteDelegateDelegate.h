#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookSlottedItemOperationCompleteDelegateDelegate.generated.h"

class UFortAccountItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortCollectionBookSlottedItemOperationCompleteDelegate, const UFortAccountItem*, ItemSlotted, FName, SlotId);

