#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FortNavigationMetaFilter.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortNavigationMetaFilter : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UFortNavigationMetaFilter();
};

