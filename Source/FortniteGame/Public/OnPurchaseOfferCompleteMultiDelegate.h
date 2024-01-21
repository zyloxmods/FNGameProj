#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "OnPurchaseOfferCompleteMultiDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPurchaseOfferCompleteMulti, bool, bSuccess, const TArray<FPurchasedItemInfo>&, PurchasedItems);

