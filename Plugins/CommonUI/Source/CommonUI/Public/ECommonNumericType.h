#pragma once
#include "CoreMinimal.h"
#include "ECommonNumericType.generated.h"

UENUM(BlueprintType)
enum class ECommonNumericType : uint8 {
    Number,
    Percentage,
    Seconds,
    Distance,
};

