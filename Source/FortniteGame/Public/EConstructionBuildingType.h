#pragma once
#include "CoreMinimal.h"
#include "EConstructionBuildingType.generated.h"

UENUM(BlueprintType)
namespace EConstructionBuildingType {
    enum Type {
        Wall,
        Floor,
        Stairs,
        Roof,
        Brace,
        WallWindow,
        Count,
    };
}

