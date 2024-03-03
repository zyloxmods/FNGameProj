#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTrackedGameplayDataRangeChangedInternalDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFortTrackedGameplayDataRangeChangedInternal, bool, bIsInRange, const FGameplayTag&, AccumulationTag, const FGameplayTag&, RangeTag);

