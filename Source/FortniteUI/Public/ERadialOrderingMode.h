#pragma once
#include "CoreMinimal.h"
#include "ERadialOrderingMode.generated.h"

UENUM(BlueprintType)
enum class ERadialOrderingMode : uint8 {
    CounterClockwise,
    Clockwise,
    Cardinal,
    Custom,
};

