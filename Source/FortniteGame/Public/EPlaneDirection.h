#pragma once
#include "CoreMinimal.h"
#include "EPlaneDirection.generated.h"

UENUM(BlueprintType)
enum class EPlaneDirection : uint8 {
    Center,
    Right,
    Left,
    Up,
    Down,
};

