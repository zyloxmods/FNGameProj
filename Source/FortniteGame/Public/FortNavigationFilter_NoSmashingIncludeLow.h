#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FortNavigationFilter_NoSmashingIncludeLow.generated.h"

UCLASS(Blueprintable)
class UFortNavigationFilter_NoSmashingIncludeLow : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UFortNavigationFilter_NoSmashingIncludeLow();
};

