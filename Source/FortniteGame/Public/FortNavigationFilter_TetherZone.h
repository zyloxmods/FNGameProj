#pragma once
#include "CoreMinimal.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "FortNavigationFilter_TetherZone.generated.h"

UCLASS(Blueprintable)
class UFortNavigationFilter_TetherZone : public UNavigationQueryFilter {
    GENERATED_BODY()
public:
    UFortNavigationFilter_TetherZone();
};

