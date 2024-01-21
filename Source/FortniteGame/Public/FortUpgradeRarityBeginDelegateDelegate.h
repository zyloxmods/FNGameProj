#pragma once
#include "CoreMinimal.h"
#include "FortUpgradeRarityBeginDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortUpgradeRarityBeginDelegate, const FString&, UpgradedItemInstanceId);

