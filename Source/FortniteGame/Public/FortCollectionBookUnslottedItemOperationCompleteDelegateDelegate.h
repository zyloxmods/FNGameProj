#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookUnslottedItemOperationCompleteDelegateDelegate.generated.h"

class UFortAccountItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortCollectionBookUnslottedItemOperationCompleteDelegate, const UFortAccountItem*, UnslottedItem, const UFortAccountItem*, OldItem, FName, SlotId);

