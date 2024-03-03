#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "OnRealMoneyPurchaseCompleteMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRealMoneyPurchaseCompleteMulti, bool, bSuccess, const TArray<FPurchasedItemInfo>&, PurchasedItems);

