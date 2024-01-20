#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FortNavigationFilter_NoSmashing.generated.h"

UCLASS(Blueprintable)
class UFortNavigationFilter_NoSmashing : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UFortNavigationFilter_NoSmashing();
};

