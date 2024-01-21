#pragma once
#include "CoreMinimal.h"
#include "EFortAILODLevel.generated.h"

UENUM(BlueprintType)
enum class EFortAILODLevel : uint8 {
    Invalid,
    Lowest,
    Lower,
    BelowNormal,
    Normal,
    AboveNormal,
    MAX,
};

