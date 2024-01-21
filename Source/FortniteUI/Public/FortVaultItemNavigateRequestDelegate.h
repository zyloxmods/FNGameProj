#pragma once
#include "CoreMinimal.h"
#include "FortVaultItemNavigateRequestDelegate.generated.h"

class UFortAccountItem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortVaultItemNavigateRequest, UFortAccountItem*, Item);

