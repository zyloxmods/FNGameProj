#pragma once
#include "CoreMinimal.h"
#include "OnGiftOfferCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FOnGiftOfferComplete, bool, bSuccess, const TArray<FString>&, IneligableAccounts, const TArray<FString>&, ErrorCodes);

