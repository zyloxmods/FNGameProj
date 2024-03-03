#pragma once
#include "CoreMinimal.h"
#include "ECardinalPoint.generated.h"

UENUM(BlueprintType)
enum class ECardinalPoint : uint8 {
    E,
    NE,
    N,
    NW,
    W,
    SW,
    S,
    SE,
    None,
};

