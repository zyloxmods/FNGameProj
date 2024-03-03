#pragma once
#include "CoreMinimal.h"
#include "EInBoundsState.generated.h"

UENUM(BlueprintType)
enum class EInBoundsState : uint8 {
    NoBounds,
    NotInBounds,
    InBounds,
};

