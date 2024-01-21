#pragma once
#include "CoreMinimal.h"
#include "EFortUICameraFrameTargetBoundingBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortUICameraFrameTargetBoundingBehavior : uint8 {
    NoBounds,
    AllBounds,
    TopBoundOnly,
};

