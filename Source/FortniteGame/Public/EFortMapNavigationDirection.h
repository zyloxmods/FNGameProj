#pragma once
#include "CoreMinimal.h"
#include "EFortMapNavigationDirection.generated.h"

UENUM(BlueprintType)
enum class EFortMapNavigationDirection : uint8 {
    North,
    NorthEast,
    East,
    SouthEast,
    South,
    SouthWest,
    West,
    NorthWest,
    Invalid,
};

