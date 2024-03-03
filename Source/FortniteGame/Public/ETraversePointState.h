#pragma once
#include "CoreMinimal.h"
#include "ETraversePointState.generated.h"

UENUM(BlueprintType)
enum class ETraversePointState : uint8 {
    None,
    Hidden,
    Active,
    TouchedByPlayer,
    Finished,
};

