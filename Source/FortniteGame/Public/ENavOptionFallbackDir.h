#pragma once
#include "CoreMinimal.h"
#include "ENavOptionFallbackDir.generated.h"

UENUM(BlueprintType)
enum class ENavOptionFallbackDir : uint8 {
    Left,
    Right,
    Up,
    Down,
    Num,
    Invalid,
};

