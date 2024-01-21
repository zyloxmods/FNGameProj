#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.h"
#include "HarvestingOptimizerBuildingData.generated.h"

USTRUCT(BlueprintType)
struct FHarvestingOptimizerBuildingData : public FOutpostBuildingData {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FHarvestingOptimizerBuildingData();
};

