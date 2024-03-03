#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "OnRealMoneyPurchaseCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRealMoneyPurchaseComplete, bool, bSuccess, const TArray<FPurchasedItemInfo>&, PurchasedItems);

