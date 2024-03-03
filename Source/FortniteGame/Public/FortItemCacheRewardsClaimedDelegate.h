#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortItemCacheRewardsClaimedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortItemCacheRewardsClaimed, const TArray<FFortItemInstanceQuantityPair>&, ClaimedRewards);

