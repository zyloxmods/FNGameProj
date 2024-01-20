#pragma once
#include "CoreMinimal.h"
#include "FortItemInstanceQuantityPair.h"
#include "OnHordeWaveCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHordeWaveCompleteDelegate, const int32, Wave, const TArray<FFortItemInstanceQuantityPair>&, Rewards);

