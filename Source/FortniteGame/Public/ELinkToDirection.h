#pragma once
#include "CoreMinimal.h"
#include "ELinkToDirection.generated.h"

UENUM(BlueprintType)
enum class ELinkToDirection : uint8 {
    Up,
    Down,
    Right,
    Left,
    Forward,
    Backward,
};

