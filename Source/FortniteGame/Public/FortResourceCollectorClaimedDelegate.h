#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortResourceCollectorClaimedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortResourceCollectorClaimed, const TArray<FFortItemInstanceQuantityPair>&, CollectorRewards);

