#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortTrackedGameplayDataRangeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFortTrackedGameplayDataRangeChanged, bool, bIsInRange, const FGameplayTag&, AccumulationTag, const FGameplayTag&, RangeTag);

