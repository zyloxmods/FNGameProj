#pragma once
#include "CoreMinimal.h"
#include "FortCollectionBookRewards.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortCollectionBookClaimRewardCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortCollectionBookClaimRewardCompleteDelegate, FFortCollectionBookRewards, RewardClaimed, bool, bSuccess, const TArray<FFortItemInstanceQuantityPair>&, ActualRewards);

