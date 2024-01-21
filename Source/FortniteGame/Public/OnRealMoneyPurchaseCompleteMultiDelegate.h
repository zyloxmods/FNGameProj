#pragma once
#include "CoreMinimal.h"
#include "OnRealMoneyPurchaseCompleteMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRealMoneyPurchaseCompleteMulti, bool, bSuccess);

