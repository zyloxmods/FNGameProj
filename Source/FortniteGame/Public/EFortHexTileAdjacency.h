#pragma once
#include "CoreMinimal.h"
#include "EFortHexTileAdjacency.generated.h"

UENUM(BlueprintType)
namespace EFortHexTileAdjacency {
    enum Type {
        North,
        NorthEast,
        SouthEast,
        South,
        SouthWest,
        NorthWest,
        Max_None,
    };
}

