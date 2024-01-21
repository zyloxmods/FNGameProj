#pragma once
#include "CoreMinimal.h"
#include "EStructuralWallPosition.generated.h"

UENUM(BlueprintType)
enum class EStructuralWallPosition : uint8 {
    Left,
    Right,
    Front,
    Back,
};

