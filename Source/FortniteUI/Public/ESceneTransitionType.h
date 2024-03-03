#pragma once
#include "CoreMinimal.h"
#include "ESceneTransitionType.generated.h"

UENUM(BlueprintType)
enum class ESceneTransitionType : uint8 {
    NoTransition,
    Clockwise,
    CounterClockwise,
};

