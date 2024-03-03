#pragma once
#include "CoreMinimal.h"
#include "OnBattlePassPurchaseCompleteDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBattlePassPurchaseComplete, bool, bSuccess);

