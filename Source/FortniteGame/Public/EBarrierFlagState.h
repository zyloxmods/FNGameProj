#pragma once
#include "CoreMinimal.h"
#include "EBarrierFlagState.generated.h"

UENUM(BlueprintType)
enum class EBarrierFlagState : uint8 {
    FlagUp,
    FlagDown,
};

