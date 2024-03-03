#pragma once
#include "CoreMinimal.h"
#include "VaultItemsViewedDelegate.generated.h"

class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVaultItemsViewed, const TArray<UFortItem*>&, Items);

