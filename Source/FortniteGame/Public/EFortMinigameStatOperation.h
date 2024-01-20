#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameStatOperation.generated.h"

UENUM(BlueprintType)
enum class EFortMinigameStatOperation : uint8 {
    Equal,
    Less,
    Greater,
    LessOrEqual,
    GreaterOrEqual,
};

