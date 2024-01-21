#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortUpgradeRarityCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortUpgradeRarityCompleteDelegate, const bool, bWasSuccessful, const FString&, UpgradedItemInstanceId, const TArray<FFortItemInstanceQuantityPair>&, ItemsQuantities);

