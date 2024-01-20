#pragma once
#include "CoreMinimal.h"
#include "EAthenaMutatorEvaluators.generated.h"

UENUM(BlueprintType)
enum class EAthenaMutatorEvaluators : uint8 {
    NoOverride,
    ForceOverride,
    Add,
    Multiply,
};

