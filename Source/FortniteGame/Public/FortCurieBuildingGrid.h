#pragma once
#include "CoreMinimal.h"
#include "FortCurieSpatialGrid.h"
#include "FortCurieBuildingGrid.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieBuildingGrid : public FFortCurieSpatialGrid {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieBuildingGrid();
};

