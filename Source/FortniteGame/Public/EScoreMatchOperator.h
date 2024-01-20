#pragma once
#include "CoreMinimal.h"
#include "EScoreMatchOperator.generated.h"

UENUM(BlueprintType)
enum class EScoreMatchOperator : uint8 {
    Invalid,
    LessThan,
    LessThanOrEqual,
    Equal,
    GreaterThan,
    GreaterThanOrEqual,
};

