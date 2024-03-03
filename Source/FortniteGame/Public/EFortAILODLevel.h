#pragma once
#include "CoreMinimal.h"
#include "EFortAILODLevel.generated.h"

UENUM(BlueprintType)
enum class EFortAILODLevel : uint8 {
    Invalid,
    MIN = 0x0,
    Dormant,
    BelowLower,
    Lower,
    AboveLower,
    BelowNormal,
    Normal,
    AboveNormal,
    MAX,
};

