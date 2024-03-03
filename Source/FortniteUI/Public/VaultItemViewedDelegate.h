#pragma once
#include "CoreMinimal.h"
#include "VaultItemViewedDelegate.generated.h"

class UFortItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVaultItemViewed, const UFortItem*, Item);

