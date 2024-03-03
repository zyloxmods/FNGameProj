#pragma once
#include "CoreMinimal.h"
#include "FortCurieSpatialGrid.h"
#include "FortCurieGrassGrid.generated.h"

USTRUCT(BlueprintType)
struct FFortCurieGrassGrid : public FFortCurieSpatialGrid {
    GENERATED_BODY()
public:
    FORTNITEGAME_API FFortCurieGrassGrid();
};

