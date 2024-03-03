#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortTransmogCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortTransmogCompleteDelegate, const TArray<FFortItemInstanceQuantityPair>&, TransmoggedItems, const TArray<FFortItemInstanceQuantityPair>&, RecycledItems);

