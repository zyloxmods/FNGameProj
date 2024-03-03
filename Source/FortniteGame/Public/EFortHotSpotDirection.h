#pragma once
#include "CoreMinimal.h"
#include "EFortHotSpotDirection.generated.h"

UENUM(BlueprintType)
enum class EFortHotSpotDirection : uint8 {
    PositiveX,
    NegativeX,
    PositiveY,
    NegativeY,
    PositiveZ,
    NegativeZ,
    Any,
};

