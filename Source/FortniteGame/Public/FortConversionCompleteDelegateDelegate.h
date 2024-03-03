#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "FortConversionCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortConversionCompleteDelegate, const bool, bWasSuccessful, const FString&, ConvertedItemInstanceId, const TArray<FFortItemInstanceQuantityPair>&, ItemsQuantities);

