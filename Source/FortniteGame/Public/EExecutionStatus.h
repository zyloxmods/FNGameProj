#pragma once
#include "CoreMinimal.h"
#include "EExecutionStatus.generated.h"

UENUM(BlueprintType)
enum class EExecutionStatus : uint8 {
    ExecutionError,
    ExecutionDenied,
    ExecutionSuccess,
    ExecutionPending,
    ExecutionAllowed,
};

