#pragma once
#include "CoreMinimal.h"
#include "EPlayerIndicatorFlags.generated.h"

UENUM(BlueprintType)
enum class EPlayerIndicatorFlags : uint8 {
    None,
    Minimap,
    WorldArrow,
    WorldName = 0x4,
};

