#pragma once
#include "CoreMinimal.h"
#include "EWaxTokenState.generated.h"

UENUM(BlueprintType)
enum class EWaxTokenState : uint8 {
    None,
    FirstSpline,
    Interpolation,
    LastSpline,
    Finished,
};

