#pragma once
#include "CoreMinimal.h"
#include "OnRealMoneyPurchaseCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnRealMoneyPurchaseComplete, bool, bSuccess);

