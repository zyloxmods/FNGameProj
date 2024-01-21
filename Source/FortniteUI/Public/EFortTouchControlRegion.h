#pragma once
#include "CoreMinimal.h"
#include "EFortTouchControlRegion.generated.h"

UENUM(BlueprintType)
enum class EFortTouchControlRegion : uint8 {
    MovePlayer,
    RotateCamera,
    NoRegion,
    COUNT,
};

