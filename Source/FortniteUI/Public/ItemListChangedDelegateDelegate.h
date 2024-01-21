#pragma once
#include "CoreMinimal.h"
#include "ItemListChangedDelegateDelegate.generated.h"

class UFortWorldItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FItemListChangedDelegate, const TArray<UFortWorldItem*>&, ItemsAdded, const TArray<UFortWorldItem*>&, ItemsRemoved);

