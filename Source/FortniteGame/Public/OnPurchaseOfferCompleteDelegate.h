#pragma once
#include "CoreMinimal.h"
#include "PurchasedItemInfo.h"
#include "OnPurchaseOfferCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnPurchaseOfferComplete, bool, bSuccess, const TArray<FPurchasedItemInfo>&, PurchasedItems, const FString&, OfferId);

