#pragma once
#include "CoreMinimal.h"
#include "EBarrierState.generated.h"

UENUM(BlueprintType)
enum class EBarrierState : uint8 {
    BarrierUp,
    BarrierComingDown,
    BarrierDown,
};

