#pragma once
#include "CoreMinimal.h"
#include "EFortCompletionResult.generated.h"

UENUM(BlueprintType)
enum class EFortCompletionResult : uint8 {
    Win,
    Loss,
    Draw,
    Undefined,
};

