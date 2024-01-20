#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FortNavigationFilter_IgnoreSmashingCost.generated.h"

UCLASS(Blueprintable)
class UFortNavigationFilter_IgnoreSmashingCost : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UFortNavigationFilter_IgnoreSmashingCost();
};

